grammar = {
    "S": ["CC"],
    "C": ["aC", "b"]
}
first = {
    "C": {"a", "b"},
    "S": {"a", "b"}
}
follow = {
    "S": {"$"},
    "C": {"a", "b", "$"}
}
def isterminal(symbol: str)->bool:
    return symbol.islower() or not symbol.isalpha()
def get_first(production: str)-> set:
    fst = set()
    for prod in production:
        if isterminal(prod[0]):
            fst.add(prod[0])
        else:
            fst |= first[prod[0]]
    return fst
M = {}
for production in grammar:
    alpha = grammar[production]
    for char in get_first(alpha):
        if isterminal(char) and char != '&':
            M[production,char] = []
            for rhs in grammar[production]:
                if isterminal(rhs[0]) and rhs[0] == char:
                    M[production,char].append(rhs)
                elif rhs[0].isupper():
                    M[production,char].append(rhs)
        if char == '&':
            for flw in follow[production]:
                if isterminal(flw):
                    M[production,flw]=[]
                    for rhs in grammar[production]:
                        if isterminal(rhs[0]) and rhs[0] == char:
                            M[production,flw].append(rhs)
                        elif rhs[0].isupper():
                            M[production,flw].append(rhs)
                if char == '$':
                    M[production,'$'] = grammar[production]
print("Parsing Table")
for i in M:
    print(f"{i} : {M[i]}")

stack = []
stack.append('$')
stack.append(next(iter(grammar)))
i = 0
istr = input("Enter a String :") + '$'
print(f"{'Stack':<15} {'Input Buffer':<15} {'Activity'}")
while len(stack) > 1:
    X = stack[-1]
    cur = istr[i]

    sbf = ''.join(stack)
    ibf = istr[i:]
    if isterminal(X):
        if X == cur:
            print(f"{sbf:<15} {ibf:<15} Match '{cur}")
            stack.pop()
            i = i + 1
        else:
            raise Exception("Parsing Error")
    else:
        try:
            production = M[X,cur][0]
            print(f"{sbf:<15} {ibf:<15} M[{X},{cur}]: Expand by {X} -> {''.join(production)}")
            stack.pop()
            if '&' not in production:
                for alpha in production[::-1]:
                    stack.append(alpha)
        except KeyError:
            print(f"{sbf:<15} {ibf:<15} M[{X},{cur}]: No Entry - Error")
            break
if stack[-1] == istr[i] and istr[i] == '$':
    print(f"{stack[-1]:<15} {istr[i]:<15} String Matched")
else:
    print("String Failed")
        

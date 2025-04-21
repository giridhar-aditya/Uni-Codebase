from collections import defaultdict

def comp_first(grammar):
    first = defaultdict(set)
    def find_first(symbol):
        if symbol in first and first[symbol]:
            return first[symbol]
        if not symbol.isupper():
            return set(symbol)
        result = set()
        for production in grammar[symbol]:
            if production == '&':
                result.add('&')
            else:
                for char in production:
                    first_char = find_first(char)
                    result.update(first_char - {'&'})
                    if '&' not in first_char:
                        break
                    else:
                        result.add('&')
        first[symbol] = result
        return result
    for variable in grammar:
        find_first(variable)
    return dict(first)

def comp_follow(grammar,first):
    follow = defaultdict(set)
    first_symbol = next(iter(grammar))
    follow[first_symbol].add('$')
    while True:
        updated = False
        for variable in grammar:
            for production in grammar[variable]:
                trailer = follow[variable].copy()
                for symbol in reversed(production):
                    if symbol.isupper():
                        if trailer - follow[symbol]:
                            follow[symbol].update(trailer)
                            updated = True
                        if '&' in first[symbol]:
                            trailer.update(first[symbol] - {'&'})
                        else:
                            trailer = first[symbol]
                    else:
                        trailer = set(symbol)
        if not updated:
            break
    return dict(follow)

def remove_lr(grammar):
    new_grammar = {}
    for non_terminal,productions in grammar.items():
        alpha = []
        beta = []
        for production in productions:
            if production.startswith(non_terminal):
                alpha.append(production[len(non_terminal):])
            else:
                beta.append(production)
        if alpha:
            new_non_terminal = non_terminal + "'"
            new_grammar[non_terminal] = [new_non_terminal + b for b in beta]
            new_grammar[new_non_terminal] = [new_non_terminal + a for a in alpha] + ['&']
        else:
            new_grammar[non_terminal] = productions
    return dict(new_grammar)

grammar = {
    "S": ["CC"],
    "C": ["aC", "b"]
}
grammar = remove_lr(grammar)

first = comp_first(grammar)
follow = comp_follow(grammar,first)
print("FIRST SET")
for key,value in first.items():
    print(key,value)
print("FOLLOW SET")
for key,value in follow.items():
    print(key,value)




                















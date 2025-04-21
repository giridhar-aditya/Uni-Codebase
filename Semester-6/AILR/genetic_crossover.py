def create_child(paren1,parent2,n=8):
    child1,child2 = [],[]
    for i in range(n//2):
        child1.append(parent1[i])
        child2.append(parent2[i])
    for i in range(n//2,n):
        child1.append(parent2[i])
        child2.append(parent1[i])
    print("Child 1 :",child1)
    print("Child 2 :",child2)
    return [child1,child2]
def mutate(children):
    c = int(input("Which Child you want to Mutate  :"))
    child = children[c-1]
    n = int(input("Enter the Position to Mutate (1-8) :"))
    x = int(input("Enter the Value to Replace (1-8) :"))
    child[n-1]=x
    print("Mutated Child :",child)
parent1 = [3, 7, 2, 8, 1, 5, 4, 6]
parent2 = [1, 8, 2, 7, 3, 6, 4, 5]
children = create_child(parent1,parent2)
mutate(children)


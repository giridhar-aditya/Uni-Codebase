from itertools import permutations
def solve_cryptarithmetic(a,b,c):
    letters = (list(set(a + b + c)))
    A,B,C = 0,0,0
    n = len(a)
    for digits in permutations(range(10), len(letters)):
        mapping = {letter: digit for letter, digit in zip(letters, digits)}
        if mapping[a[0]] == 0 or mapping[c[0]] == 0:
            continue
        A = sum(mapping[a[i]] * 10**(len(a) - i - 1) for i in range(len(a)))
        B = sum(mapping[b[i]] * 10**(len(b) - i - 1) for i in range(len(b)))
        C = sum(mapping[c[i]] * 10**(len(c) - i - 1) for i in range(len(c)))
        if A + B == C:
            print("Solution found:")
            print("Letter to digit mapping:", mapping)
            continue
a = input("Enter Word 1 :").split()
b = input("Enter Word 2 :").split()
c = input("Enter Sum Word :").split()
solve_cryptarithmetic(a,b,c)
#Mice Hole Problem
n = int(input("Enter the number of kids: "))
print("Enter the positions of kids:")
k = [int(input()) for _ in range(n)]
print("Enter the positions of chocolate shelves:")
c = [int(input()) for _ in range(n)]
k.sort()
c.sort()
diff = [abs(k[i] - c[i]) for i in range(n)]
for i in range(n):
    print(f"Kid {i+1} has moved {diff[i]} steps to reach chocolate at position {c[i]} from {k[i]}")
print("The maximum time taken by those kids to reach their shelves is:", max(diff))

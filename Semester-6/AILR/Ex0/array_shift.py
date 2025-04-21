#Left & Right Shift
def shift(n,arr,di,x):
    arr2=[0 for i in range(n)]
    if di == 'R':
        for i in range(n-x):
            arr2[x+i] = arr[i]
        i = 0
        for j in range(n-x,n):
            arr2[i] = arr[j]
            i+=1
    else:
        for i in range(n-x):
            arr2[i] = arr[x+i]
        i = 0
        for j in range(n-x,n):
            arr2[j] = arr[i]
            i+=1
    return arr2        
n = int(input("Enter the Number of Elements in List :"))
arr = [input('Enter Element {} :'.format(i+1)) for i in range(n)]   
arr = shift(n,arr,input("Left or Right Shift(L/R) :"),int(input("Enter Number of Digits to Shift :")))
print("Shifted Array :",arr)
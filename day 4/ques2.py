n = int(input("enter n:"))

a = 0 
b = 1

if n ==1:
    print("nth fibonacci term =",a)
elif n == 2:
    print("nth fibonacci term =",b)

else:
    for i in range(3, n+1):

        c= a+b
        a = b
        b = c
    print ("nth fibonacci term =",b)

n = int(input("enter a no:"))

if n <=1:
    print("Not Prime")
else:
    prime = True
    for i in range(2,n):
        if n%i == 0:
            prime= False
            break
    if prime:
        print("prime")
    else:
        print("not prime")
start = int(input("enter start of range"))
end =  int(input("enter end of range:"))

print("prime no are:")

for num in range(start,end+1):
    if num>1:
        prime = True

        for i in range(2,num):
            if num % i ==0:
                prime = False 
                break
        if prime:
            print(num)
a = int(input("enter first no:"))
b = int(input("enter second no:"))

largest = max(a,b)

while True:
    if largest%a == 0 and largest % b == 0:
        lcm = largest
        break
    largest +=1

print("LCM =", lcm)
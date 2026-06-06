num = int(input("enter a no:"))

temp = num
digits = len(str(num))
sum = 0

while temp> 0:
    digit = temp % 10
    sum = sum + digit ** digits
    temp = temp // 10

if sum == num:
    print("Armstrong no")

else: print ("not an armstrong no")

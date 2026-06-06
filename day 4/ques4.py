start = int(input("enter starting number:"))
end = int(input("enter ending no:"))

print("armstrong no are:")

for num in range (start, end +1):
    temp = num 
    digits = len(str(num))
    sum = 0

    while temp > 0:
        digit = temp % 10
        sum = sum + digit ** digits 
        temp = temp // 10

    if sum == num:
        print(num)
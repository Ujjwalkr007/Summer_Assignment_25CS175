num = int(input("enter a no:"))

count = 0 

while num > 0:
    if num % 2 == 1:
        count += 1

    num = num // 2

print("no of set bits =", count)


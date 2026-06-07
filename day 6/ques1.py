num = int(input("enter a decimal no:"))

binary =""

while num > 0:
    remainder = num % 2
    binary = str(remainder) + binary 
    num = num // 2

print("binary=", binary)
a = int(input("enter first no:"))
b = int (input("enter second no:"))

gcd = 1

for i in range(1,min(a,b)+1):

    if a % i == 0 and b % i == 0:
        gcd = i
for i in range(1,min(a,b) +1):
    if a % i  == 0 and b % i == 0:
        gcd = i

print("GCD=", gcd)
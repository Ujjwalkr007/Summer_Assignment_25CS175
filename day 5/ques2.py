num = int(input("enter a no:"))

temp = num
sum_fact = 0

while temp > 0:

    digit =  temp % 10

    fact = 1
    for i in range(1,digit + 1):
        fact *= i

    sum_fact += fact
    temp  //= 10
555
if sum_fact == num:
    print("strong no")

else:
    print("not a strong no")
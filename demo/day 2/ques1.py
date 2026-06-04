num = 34578
digit_sum = 0

while num>0:
    digit= num%10
    digit_sum = digit_sum + digit
    num = num//10


print("the sum of the digits is :", digit_sum)

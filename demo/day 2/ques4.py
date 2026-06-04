original_num = 123
num = original_num
reversed_num = 0

while num > 0:
    digit = num%10
    reversed_num = (reversed_num*10) + digit
    num = num//10

    if original_num == reversed_num:
        print(original_num, "is a palondrom number")
    else:
        print (original_num,"is not palindrim no")
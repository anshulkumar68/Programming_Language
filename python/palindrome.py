import reverseFunc 
import math

# palindrome
try:
    num = int(input("Enter the number: "))
    print(math.sqrt(num))
except ValueError:
    print("Invalid input !")


reversed_num = reverseFunc.reverse(num)
if reversed_num == num:
    print(f'{num} is palindrome')
else:
    print(f'{num} is not a palindrome')
    


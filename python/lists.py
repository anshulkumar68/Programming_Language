try:
    num = int(input("Enter the number: "))
except ValueError:
    print("Invalid input !")

# factorial
def factorial(num):
    fact = 1
    for i in range(1, num+1):
        fact*=i
    return fact

# print(f"Factorial of {num} is {factorial(num)}")


# prime
def prime(num):
    if num < 2:
        return "not a prime number"
     
    for i in range (2, num+1):
        if num%i==0:
            return "not a prime number"
    return "prime number"

# print(f"{num} is {prime(num)}")


# Calculator
def add(num1, num2):
    return num1+num2
def subtract(num1, num2):
    return num1-num2
def multiply(num1, num2):
    return num1*num2
def divide(num1, num2):
    if(num2==0):
        return "cannot divide by zero"
    return num1/num2

def calculator():
    print("Select operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")

    choice = input("enter choice (1/2/3/4): ")

    if choice not in ('1', '2', '3', '4'):
        print("Invalid choice! Please choose between 1, 2, 3, or 4.")
        return

    try:
        num1 = int(input("Enter the 1 number: "))
        num2 = int(input("Enter the 2 number: "))
    except ValueError:
        print("Invalid input !")
        return
    
    if choice == '1':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif choice == '2':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif choice == '3':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif choice == '4':
        print(f"{num1} / {num2} = {divide(num1, num2)}")

# calculator()
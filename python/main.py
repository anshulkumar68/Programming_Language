try:
    name = input("Enter your name:")
    age = int(input('Enter an age:'))
    message = f"My name is {name} and age is {age}"
    print(message)
except ValueError:
    print("Invalid input!")


# Simple Calculator

# def add(x, y):
#     return x + y

# def subtract(x, y):
#     return x - y
# def multiply(x, y):
#     return x * y

# def divide(x, y):
#     if y == 0:
#         return "Cannot divide by zero"
#     return x / y

# def calculator():
#     print("Select operation:")
#     print("1. Add")
#     print("2. Subtract")
#     print("3. Multiply")
#     print("4. Divide")

#     choice = input("Enter choice (1/2/3/4): ")

#     # Ensure the user enters a valid choice
#     if choice not in ('1', '2', '3', '4'):
#         print("Invalid choice! Please choose between 1, 2, 3, or 4.")
#         return
    
#     # Take input for numbers
#     try:
#         num1 = float(input("Enter first number: "))
#         num2 = float(input("Enter second number: "))
#     except ValueError:
#         print("Invalid input! Please enter valid numbers.")
#         return

#     if choice == '1':
#         print(f"{num1} + {num2} = {add(num1, num2)}")
#     elif choice == '2':
#         print(f"{num1} - {num2} = {subtract(num1, num2)}")
#     elif choice == '3':
#         print(f"{num1} * {num2} = {multiply(num1, num2)}")
#     elif choice == '4':
#         print(f"{num1} / {num2} = {divide(num1, num2)}")

# if __name__ == "__main__":
#     calculator()

def calculator():
    operation = ''
    num1, num2, result = 0, 0, 0

    try:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
    except ValueError:
        print("Invalid input!")
        return

    print("Result:", result)

    operation = input("Select operation (+, -, *, /):").strip()

    if operation == '+':
        result = num1 + num2
    elif operation == '-':
        result = num1 - num2
    elif operation == '*':
        result = num1 * num2
    elif operation == '/':
        if num2 != 0:
            result = num1 / num2
        else:
            print("Cannot divide by zero!")
            return
    else:
        print("Invalid operation!")
        return

calculator()

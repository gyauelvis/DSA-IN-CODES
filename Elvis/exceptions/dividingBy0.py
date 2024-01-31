try:
    divisor = int(input("Enter a divisor: "))
    result = 10 / divisor
except ZeroDivisionError:
    print("You can't divide by zero!")
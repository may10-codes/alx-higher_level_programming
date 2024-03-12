#!/usr/bin/python3
import random
number = random.randint(-10, 10)
number = float(input("Enter a number: "))  # Assuming you're taking input from the user

if number > 0:
     print(number, "is positive")
elif number == 0:
    print(number, "is zero")
else:
    print(number, "is negative")

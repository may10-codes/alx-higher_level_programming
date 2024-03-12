#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
final_dgt = abs(number) % 10
if number < 0:
    final_dgt = -final_dgt
    
if final_dgt > 5:
    print(f"final digit of {number} is {final_dgt} and is greater than 5")
elif final_dgt < 6 and final_dgt != 0:
    print(f"final digit of {number} is {final_dgt} and is less than 6 and not 0")
else:
    print(f"final digit of {number} is {final_dgt} and is 0")

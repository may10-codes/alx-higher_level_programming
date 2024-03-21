#!/usr/bin/python3

def roman_to_integer(roman_string):
    roman_dict = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
    }
    integer_value = 0
    last_value = 0

    for char in reversed(roman_string):
        current_value = roman_dict.get(char, 0)  # Get value or 0 if not found
        if current_value < last_value:
            integer_value -= current_value  # Subtract if smaller than previous
        else:
            integer_value += current_value  # Add if larger or equal to previous
        last_value = current_value

    return integer_value


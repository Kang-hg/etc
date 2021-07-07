from typing import MutableSequence


def mul(*values):
    output = 1
    for value in values:
        output *= value
    
    return output

print()
print(mul(5,7,9,10))
print()
def function01(*values, valueA, valueB):
    pass
function01(1, 2, 3, 4, 5)

def function02(*values, valueA=10, valueB=20):
    pass
function02(1, 2, 3, 4, 5)

def function03(valueA, valueB, *values):
    pass
function03(1, 2, 3, 4, 5)

def function04(valueA=10, valueB=20, *values):
    pass
function04(1, 2, 3, 4, 5)

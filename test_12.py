numbers = [1, 6, 1, 2, 4, 8, 3, 9, 2, 5, 7, 7, 8, 3, 2, 6, 9, 1, 4, 5, 2, 3, 7, 9, 1]
counter = {}

for number in numbers:
    if number in counter:
        counter[number] = counter[number] + 1
    else:
        counter[number] = 1
print(counter)

numbers = [1,2,6,8,4,3,2,1,9,5,4,9,7,2,1]
counter = {}

for number in numbers:
    print(numbers)

    if numbers in counter:
        counter[number]=counter[numbers]
print(counter)
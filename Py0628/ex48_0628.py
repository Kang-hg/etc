numbers = [273, 103, 5, 32, 65, 9, 72, 800, 99]
print()

for number in numbers:
    if number % 2 == 0:
        print(number, "는 짝수입니다.")
    else:
        print(number, "는 홀수입니다.")

print()

for number in numbers:
    print(number, "는", len((str)(number)), "자릿수입니다.")


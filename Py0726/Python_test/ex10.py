num = int(input("정수 입력>"))

for i in range(1, num+1):
    print(" " * (num-i) + ("*" * (2 * i - 1)))


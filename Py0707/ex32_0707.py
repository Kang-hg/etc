# 리스트 내포를 사용해본 코드입니다.
output = [i for i in range(1,101)
    if "{:b}".format(i).count("0") == 1]

for i in output:
    print("{} : {}".format(i, "{:b}".format(i)))

print("합계:", sum(output))
print()

#===========================================================
array = []

for i in range(1, 101):
    if "{:b}".format(i).count("0") == 1:
        array.append(i)

for i in output:
    print("{} : {}".format(i, "{:b}".format(i)))

print("합계:", sum(array))
print()
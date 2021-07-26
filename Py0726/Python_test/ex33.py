num = input()
l = list(num.strip().split())

print(num[::-1])
len1 = len(l) - 1
for i in range(len1, -1, -1):
    print(l[i], end=" ")
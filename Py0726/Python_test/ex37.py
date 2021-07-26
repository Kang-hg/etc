name = list(map(str, input().split()))
count = 0

for i in range(len(name)):
    if name.count(name[i-1]) < name.count(name[i]):
        count = i

print("{}(이)가 총 {}표로 반장이 되었습니다.".format(name[count], name.count(name[count])))

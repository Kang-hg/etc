list_a = ["name", "hp", "mp", "level"]
list_b = ["기사", 200, 30, 5]

aaa = {}
for i in range(0, len(list_a)):
    aaa[list_a[i]] = list_b[i]

print(aaa)

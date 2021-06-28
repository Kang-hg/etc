list_a = [0, 1, 2, 3, 4, 5, 6, 7]
print()
print(list_a)
print()

list_a.extend(list_a)       # list_a를 연장
print(list_a)
print()

list_a.append(10)           # 맨 뒤에 10을 추가
print(list_a)
print()

list_a.insert(3, 0)         # 3번째 위치에 0을 추가
print(list_a)
print()

list_a.remove(3)            # 3의 값을 제거
print(list_a)
print()

list_a.pop(3)               # 3번째 위치를 제거
print(list_a)
print()

list_a.clear()              # list 내용 전부 제거
print(list_a)
print()

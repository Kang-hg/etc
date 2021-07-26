key = input().split()
value = map(int, input().split())

student = dict(zip(key, value))
print(student)
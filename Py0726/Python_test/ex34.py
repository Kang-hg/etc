height = input()
l = list(height.strip().split())
l = [int(i) for i in l]

if l != sorted(l):
    print("No")
else:
    print("Yes")

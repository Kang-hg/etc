import random
print()
print(int(random.random()*6+1))
print(random.randrange(1,7))
print(range(1,7))
print()

abc = ['a', 'b', 'c', 'd', 'e']
print(random.shuffle(abc))
print(random.choice(abc))

menu = '짜장', '짬뽕', '탕수육'
print(random.choice(menu))
print(random.choice([True, False]))
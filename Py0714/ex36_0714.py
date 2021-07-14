import random as ran
# from random import *
print()
print("# random 모듈")

# random(): 0.0 <= x < 1.0 사이의 float를 리턴합니다.
print("- random():", ran.random())

# uniform(min, max): 지정한 범위 사이의 float를 리턴합니다.
print("- uniform(10, 20):", ran.uniform(10, 20))

# randrange(): 지정한 범위의 int를 리턴합니다.
# - randrange(max): 0부터 max 사이의 값을 리턴합니다.
# - randrange(min, max): min부터 max 사이의 값을 리턴합니다.
print("- randrange(10):", ran.randrange(10))

# choice(list): 리스트 내부에 있는 요소를 랜덤하게 선택합니다.
print("- choice([1, 2, 3, 4, 5]):", ran.choice([1, 2, 3, 4, 5]))

# shuffle(list): 리스트의 요소들을 랜덤하게 섞습니다.
print("- shuffle([1, 2, 3, 4, 5]):", ran.shuffle([1, 2, 3, 4, 5]))

# sample(list, k=<숫자>): 리스트의 요소 중에 k개를 뽑습니다.
print("- sample([1, 2, 3, 4, 5], k=2)", ran.sample([1, 2, 3, 4, 5], k=2))
print()

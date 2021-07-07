# 변수를 선언합니다.
counter = 0

# 함수를 선언합니다.
def fibonacci(n):
    # 어떤 피보나치 수를 구하는지 출력합니다.
    print("fibonacci({})를 구합니다.".format(n))
    global counter      # 함수 내에서 함수 외부 변수를 사용할 수 없기 때문에 global 키워드 사용
    counter += 1
    # 피보나치 수를 구합니다.
    if n == 1:
        return 1
    if n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

fibonacci(10)
print("---")
print("fibonacci(10) 계산에 활용된 덧셈 횟수는 {}번 입니다.". format(counter))

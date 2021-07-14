# 함수를 선언합니다.
def power(item):            # 곱셈 함수 정의
    return item * item

def under_3(item):          # 3보다 작은수를 리턴하는 함수 정의
    return item<3

# 변수를 선언합니다.
list_input_a = [1, 2, 3, 4, 5]

# map() 함수를 사용합니다.
output_a = map(power, list_input_a)     # 함수를 매개변수로 넣었습니다.
print()
print("# map() 함수의 실행결과")
print("map(power, list_input_a):", output_a)
print("map(power, list_input_a):", list(output_a))
print()

# filter() 함수를 사용합니다.
output_b = filter(under_3, list_input_a)    # 함수를 매개변수로 넣었습니다.
print("# filter() 함수의 실행결과")
print("filter(under_3, output_b):", output_b)
print("filter(under_3, output_b):", list(output_b))
print()

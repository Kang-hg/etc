# format() 함수로 숫자를 문자열로 변환하기
format_a = "{} 만 원".format(5000)
format_b = "파이썬 열공하여 첫 연봉 {}만 원 만들기".format(5000)
format_c = "{} {} {}".format(3000, 4000, 5000)
format_d = "{} {} {}".format(1, "문자열", True)

# 출력하기
print(format_a)     # format_a : 중괄호 옆에 다른 문자열 넣음
print(format_b)     # format_b : 중괄호 앞뒤로 다른 문자열 넣음
print(format_c)     # format_c : 매개변수 여러 개 넣음
print(format_d)

# 정수
output_a = "{:d}".format(52)

# 특정 칸에 출력하기
output_b = "{:5d}".format(52)       # 3칸 뛰고 52 = 총 5칸을 차지함
output_c = "{:10}".format(52)       # 8칸 뛰고 52 = 총 10칸을 차지함

# 빈칸을 0으로 채우기
output_d = "{:05d}".format(52)      # 양수 = 빈 칸을 0으로 채움
output_e = "{:05d}".format(-52)     # 음수 = 맨 첫째 칸에 -를 채우고 빈칸을 0으로 채움

print("# 기본")
print(output_a)
print("# 특정 칸에 출력하기")
print(output_b)
print(output_c)
print("# 빈칸을 0으로 채우기")
print(output_d)
print(output_e)
print()

# 기호와 함께 출력하기
output_f = "{:+d}".format(52)       # 양수
output_g = "{:+d}".format(-52)      # 음수
output_h = "{: d}".format(52)       # 양수 : 기호 부분 공백
output_i = "{: d}".format(-52)      # 음수 : 기호 부분 공백

print("# 기호와 함께 출력하기")
print(output_f)
print(output_g)
print(output_h)
print(output_i)

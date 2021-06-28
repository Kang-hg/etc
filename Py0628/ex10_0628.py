output_a = "{:15.3f}".format(52.273)    # 15칸을 기준으로 .3f = 소숫점 아래 3자리 출력
output_b = "{:15.2f}".format(52.273)    # 15칸을 기준으로 .2f = 소숫점 아래 2자리 출력
output_c = "{:15.1f}".format(52.273)    # 15칸을 기준으로 .1f = 소숫점 아래 1자리 출력
output_d = "{:15.0f}".format(52.273)    # 15칸을 기준으로 .0f = 소숫점 아래 0자리 출력
                                        # 소숫점 아래는 반올림

print()
print(output_a)
print(output_b)
print(output_c)
print(output_d)
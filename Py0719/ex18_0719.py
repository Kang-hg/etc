# 클래스를 선언합니다.
class Human:
    def __init__(self):
        pass

class Student(Human):
    def __init__(self):
        pass

# 학생을 선언합니다.
student = Student()

# 인스턴스 확인하기
print()
print("isinstance(student, Human):", isinstance(student, Human))
print("type(student) == Human):", type(student) == Human)
print()

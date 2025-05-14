
# 클래스 변수 
# 클래스 내 변수를 지칭하는 말이며 클래스 내 lastname 변수를 생각하면 된다.
class familly:
    # 클래스 변수
    LastName = "박";


a = familly();
b = familly();
print(str(a.LastName));
# 박


# a 분기점(a = 김, b = 박)
a.LastName = "김";
print(str(a.LastName));
# 김

# 클래스 변수가 통일되지 않을 경우

print(str(a.LastName));
print(str(b.LastName));
# 김 박


# 클래스 내 변수를 선언 후 a가 통일 안된 경우
familly.LastName = "허";
print(str(a.LastName));
print(str(b.LastName));

# 김 허


# a, b 초기화후 클래스 내 변수를 선언 할 경우
a = familly();
b = familly();
print(str(a.LastName));
print(str(b.LastName));

# 허 허
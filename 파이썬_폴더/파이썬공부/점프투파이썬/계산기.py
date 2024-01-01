result = 0;

def add(num) :
    # 전역변수 result 로딩
    global result;
    # 덧셈 후 리턴
    result = num + result;
    return result;


print(add(23));
print(add(1232));

# 여기서 2개가 필요하다면 add가 2개 있어야 한다.

result1 = 0;
result2 = 0;

def add1(num) :
    # 전역변수 result 로딩
    global result1;
    # 덧셈 후 리턴
    result1 = num + result1;
    return result1;


def add2(num) :
    # 전역변수 result 로딩
    global result2;
    # 덧셈 후 리턴
    result2 = num + result2;
    return result2;


print(add1(2));
print(add2(21));

# 하지만 여러개일때 감당이 안되어 결국은 클래스를 사용해아 한다.

result_pre = input("1번째 수 입력 : ");
num = input("2번째 수 입력 : ");

result_pre = int(result_pre);
num = int(num);



class calculate:
    # def setdata(self, num1, num2):
    #     self.num1 = num1;
    #     self.num2 = num2;

    
    # 각 사칙연산 틀 정의 여기서 self는 calculate 내 값을 저장한 전역변수 
    def mul(self):
        result = self.num1 * self.num2; 
        return result;
    
    def minus(self):
        result = self.num1 - self.num2; 
        return result;
    
    def plus(self):
        result = self.num1 + self.num2; 
        return result;
    
    def other(self):
        result = self.num1 / self.num2; 
        return result;
    
    # 값을 저장하는 곳, self를 이용하여 calculate내 지역변수로 사용됨
    # 생성자(맨 먼저 호출되는 함수), 처음에 호출하는 함수이므로 위 def들을 제치고 최고 우선순위로 로드 된다.
    def __init__(self, num1, num2):
        self.num1 = num1;
        self.num2 = num2;

# 메서드 오버라이딩 
# 기존 메서드(def정의)에서 필요한 부분을 추가하고 싶을때 이 방법을 사용한다.
class safecal(calculate):
    def other(self):
        # 오류 방지 처리
        if self.num2 == 0:
            return 0;
        else :
            return self.num1 / self.num2;

# 숫자정하기
first = input("첫번째 숫자를 입력해주세요 : ");
second = input("두번째 숫자를 입력해주세요 : ");

# int으로 변환
first = int(first);
second = int(second);

# 정의(오버라이딩을 위한 작업 / 실제로는 calculate 함수)
cal = safecal(first, second);

# 계산결과 표시
print("덧셈 : " + str(cal.plus()));
print("뺄셈 : " + str(cal.minus()));
print("곱셈 : " + str(cal.mul()));
print("나눗셈 : " + str(cal.other()));


# 상속
# 형태 : class 클래스 이름(상속받을 클래스 이름)
import math;
m = math;

# asdf이라는 클래스에 기존 calculate 클래스 상속
class asdf(calculate):
    # 제곱기능 추가
    def cal_square(self):
        global m
        sum = m.pow(self.num1, self.num2);
        return sum;

ab = asdf(first, second);

print("제곱 : " + str(ab.cal_square()));


asd = safecal(first, second);

print(str(asd.other()));

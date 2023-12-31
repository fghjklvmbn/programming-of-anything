
import keyword;
import datetime;
import 피보나치;

fib = 피보나치.fib;
# 기본 출력
print("Hello Coding python");
print(keyword.kwlist);


# 날짜 추출 테스트
# 현재 날짜 정의
now = datetime.datetime.today();

# 현재날짜
print(now);

# 달
# print(now.month);


#타이머 부분

# import time;

# i = 0;

# a = input("시작하려면 s키를 누르십시오");

# if(a == "s"):
#     for i in range(1,10) :
#         time.sleep(1);
#         i += 1;
    
#     print("완료");
# else :
#     print("잘못된 키를 눌렀습니다. 다시 실행해주세요");

insert = input("수를 입력해주세요 : ");


if (int(insert)<=1):
    print("2이상의 수로 다시 입력해주세요");
else :
    fib_result = fib(int(insert));
    print(fib_result);

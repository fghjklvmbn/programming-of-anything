import sys;

# 첫번째 인수 빼고 리스트 형태로 전달
args = sys.argv[1:];

# 입력 인수 출력
for i in args :
    print(i);

# end=를 기준해서 띄어쓰기(" ")로 변환하여 한 줄에 전체 문자열 대문자로 변환
for i in args :
    print(i.upper(), end=" ");
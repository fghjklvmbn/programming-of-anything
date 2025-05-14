import datetime;

time = datetime.datetime.today();


f = open("test.txt", 'w');
for i in range(1,11):
    text = "여기는 %d 번째 줄입니다." % i;
    f.write(text + "\n");

a = input("파일 끝에 넣을 단어를 적어주세요 : ");
f.write("단어 : " + a + "\n" );
f.write("작성시간 : " + str(time) + "\n");

f.close();


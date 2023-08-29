// 위키독 https://wikidocs.net/205

import java.util.Scanner;

public class 연습17 {
    public static void main(String[] args){

        // 스캐너
        Scanner sc = new Scanner(System.in);
        // 나눗셈, 나머지 결과 출력
        System.out.println(7%3);
        System.out.println(7/3);
        System.out.println(3/7);
        System.out.println(3%7);


        int a = 0;
        // 전증가 / 후증가 차이 출력
        System.out.println("전증가 a 값: " + ++a);
        a =0; // 초기화
        System.out.println("후증가 a값 : " + a++);
        System.out.println("이후 a값 : "+a);

    int oct = 023; // 8진수
    int hex = 0xc; // 6진수

    // 각각 출력
    System.out.println(oct);
    System.out.println(hex);
        
    // boolean 초기화(true/false)
    boolean n = true;

    System.out.println(n);
    System.out.println(!n); 
    /*
    *부정의 !가 붙으니 값이 반대로 됨true -> false
    */
    
    // boolean 간단예제
    int x = 90;
    int y = 95;

    boolean isitTall = x>y;
    
    // boolean으로 정의된 isitTall함수에서 나오는 결과를 if으로 true/false를 판단하여 출력
    if(isitTall == true){
        System.out.println("y는 x보다 큽니다.");
    } else {
        System.out.println("x는 y보다 큽니다.");
    }

    // char 간단예제
    char d = 'a';
    char e = 97; // 아스키코드 97번은 소문자 a
    char f = '\u0061'; // u : 유니코드를 뜻함 유니코드 0061번은 소문자 a

    System.out.println(d); 
    System.out.println(e);
    System.out.println(f);


    // 원시자료형과 다른 String 간단예제
    String g = "asdf";
    // 혹은 
    String h = new String("asdf"); 
    // 원시 자료형이 아닌 덕에 scanner 처럼 new string()이런식
    // 으로 가능

    System.out.println(g);
    System.out.println(h);


    // equals 활용문
    System.out.println(g.equals(h));
    System.out.println(!g.equals(h));

    // indexof/contain 활용
    System.out.println(g.indexOf("as")); // 0번째 시작
    System.out.println(g.contains("as")); // 부분 일치(true)

    // charAt 활용
    System.out.println(g.charAt(2)); // 2번글자 d 출력

    // replaceall 활용
    System.out.println(g.replaceAll("as", "df"));
    // asdf이 dfdf으로 바뀜 원본은 안바뀜..

    // substring 활용
    System.out.println(g.substring(0, 4));
    //0부터 4까지 출력 : asdf 그대로 출력

    // touppercase 활용
    System.out.println(g.toUpperCase());
    // 모두 대문자로(ASDF) : 반대로도 가능(toLowerCase())

    // split 활용 : a:s:d:f을 ":" 표시단위로 쪼갬(split)
    String ha = "a:s:d:f";
    String[] result = ha.split(":");
    for(int i = 0; i<ha.length()-3; i++){
        System.out.println(result[i]);
    }
    // String을 쪼개 배열단위로 저장한 다음에 ":"을 제거하고
    // 배열에 따라 출력 


    // 문자열 포매팅: String.format을 주로 사용함
    // 아래예제는 arg자리에 scanner 활용해서 대입
    // 값 넣기는 솔직히 c의 scanf 생각하면 될듯..
    System.out.println(String.format("i ate %s apple", sc.nextLine()));
    
    // 포멧코드는 c의 그것을 생각하면 됨. %s 같은 경우는
    // 문자형 정수형 double형 상관없이 됨.
    // 다 문자열로 변환하기 때문.

    System.out.println(String.format("i have %s apples", 3.14));

    // 다른 특이한점은 %% 포멧코드가 있는데 이것은 %를 표시하기 위함이다.
    System.out.println(String.format("error is %d%%.", 98));

    // 공백코드(역시나 c언어의 그거 생각하면 됨)
    System.out.println(String.format("%10d", 123));
    // 출력 : "       123"


    // printf 역시 c의 그것
    System.out.printf("%d", 123);



    }
}

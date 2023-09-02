// 참고 https://wikidocs.net/157271

// coffee 클래스 생성

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class coffee {
    enum coffeeType { // 상수집합을 enum으로 만들수 있음
        아메리카노,
        아이스아메리카노,
        카페라떼
    };
}

// exception 상속 -> Abc
 class Abc extends Exception {

}

// coffee 상속
public class 연습21 extends coffee {
    public static void main(String[] args){
        // 저 coffeeType이라는 클래스에서 값의 배열(values)을 땡겨오는 작업
        // value 값을 coffeeType 에 있는 값만큼 for문으로 반복시키는 명령어!
        for(coffeeType type: coffeeType.values()){
            System.out.println(type); // 출력
        }

        // enum에 있는 목록들을 하나씩 출력
        System.out.println(coffeeType.아메리카노);
        System.out.println(coffeeType.아이스아메리카노);
        System.out.println(coffeeType.카페라떼);

        // enum을 사용하지 않으면 커피를 기억하면서 숫자로 지칭해야 되므로 불편해지며
        // 숫자에 없는 커피를 출력하면 오류가 나올 가능성을 높힌다.


        // 형변환

        String num = "123";
        int n = Integer.parseInt(num);
        System.out.println(n); //  String -> int 형변환 123 출력
        

        String num1 = "" + n; // 빈 문자열에 숫자열을 +하면 형 변환이 쉽게 된다.
        System.out.println(num1); // int -> String 형변환 동일하게 출력


        String n1 = "123.456";
        double n2 = Double.parseDouble(n1); // String -> double 형변환

        System.out.println(n2); // 123,456

        // 실수 -> 정수 변환시 소수점 제거됨
        int n3 = 123;
        double n4 = n3;       
        System.out.println(n4); // int -> Double 형을 바꿔도 정수부분은 변경이 없다. 123.0

        double n5 = 123.456;
        int n6 = (int)n5; // 자료형 강제변환

        System.out.println(n6); // double -> int 형으로 바뀔때는 소수점 뒤에 있는 숫자는 아예 없어진다.

        String num3 = "123.213";

        // 임의 try_catch문 사용(예외발생)
        try {
            int a = Integer.parseInt(num3); // 예외발생
            System.out.println(a);   
        } catch (Exception e) {
            double b = Double.parseDouble(num3);
            System.out.println(b);
        }

        // final = 변경불가 기능 c언어의 const 기능과 동일
        final int c = 10;
        // c = 111; 불가능
        System.out.println(c);

        // string으로 제시된 a,b는 사전에 추가할 수 있음. 재할당만 안되는 거
        final List<String> a1 = List.of("a", "b");
        final ArrayList<String> a2 = new ArrayList(Arrays.asList("a","b"));
        System.out.println(a1.get(1)); // 1번 값만 출력
        System.out.println(a2.toString()); // string 값만 출력

        }
}

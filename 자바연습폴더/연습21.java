// 참고 https://wikidocs.net/157271

// coffee 클래스 생성
class coffee {
    enum coffeeType { // 상수집합을 enum으로 만들수 있음
        아메리카노,
        아이스아메리카노,
        카페라떼
    };
}

// exception 상속-> 
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
        // 숫자에 없는 커피를 출력하면 오류가 나온다.




    }
}

// 참고 https://wikidocs.net/157271

// coffee 클래스 생성
class coffee {
    enum coffeeType { // 상수집합을 enum으로 만들수 있음
        아메리카노,
        아이스아메리카노,
        카페라떼
    };
}

// coffee 상속
public class 연습21 extends coffee {
    public static void main(String[] args){
        for(coffeeType type: coffeeType.values()){ // 저 coffeeType이라는 클래스에서 값(values)을 땡겨오는 작업
            System.out.println(type); // 출력
        }

    }
}

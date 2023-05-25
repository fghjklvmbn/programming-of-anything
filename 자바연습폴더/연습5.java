public class 연습5 {
    public static void main(String[] args){       
        int a=7,b=7;
        int sum1, sum2;

        sum1 = --a + 4; // a 변수 선 차감 후 계산
        sum2 = b-- + 4; // a 변수 선 계산 후 차감

        //결과 출력
        System.out.println("전위감소 연산자에 의한 결과 : " + sum1);
        System.out.println("\na의 변수의 값 : " + a);
        System.out.println("\n후위감소 연산자에 의한 결과 : " + sum2);
        System.out.println("\nb의 변수의 값 : " + b);

        int x = 10;
        int y = x-- + 5 + --x; 
        /*  계산 순서
        1. x-- + 5 = 15
        2. x-- 계산 (9)
        3. --x 계산 (8)
        4. 1번 결과 + --x (15 + 8)
        5. 결과값 == 23
        */

        System.out.println("x : "+ x + "\ny : " + y);
    }
}

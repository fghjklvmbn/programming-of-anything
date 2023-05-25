public class 연습3 {
    public static void main(String[] args) {
        int num1 = 4;
        int num2 = 8;
        double sum1, sum2;

        sum2 = (double)num1 / num2;
        sum1 = num2/num1;

        System.out.println(sum1);
        System.out.println(sum2);

        System.out.println("+ 연산자에 의한 결과 : "+(num1+num2));
        System.out.println("- 연산자에 의한 결과 : "+(num1-num2));
        System.out.println("* 연산자에 의한 결과 : "+(num1*num2));
        System.out.println("/ 연산자에 의한 결과 : "+(num1/num2));
        System.out.println("% 연산자에 의한 결과 : "+(num1%num2));

    }
}

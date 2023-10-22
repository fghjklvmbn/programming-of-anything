// import java.util.Scanner;

import java.util.Scanner;

public class 시험 {
    public static void main(String[] args){ 
        Scanner sc = new Scanner(System.in);
        System.out.println("원의 중심과 반지름 입력>> ");
        double x;
        double y;
        double rad;

        x = sc.nextDouble();
        y = sc.nextDouble();
        rad = sc.nextDouble();

        double a = rad + x;
        double b = rad + y;
        double c = x - rad;
        double d = y - rad;

        System.out.println("점 입력 >>");
        double f1 = sc.nextDouble();
        double f2 = sc.nextDouble();
        if((a > f1 && c < f1) && (b>f1 && d<f1)){
            System.out.println("점 ("+f1 +","+f2+")는 원 안에 있다.");
        } else {
            System.out.println("점 ("+f1 +","+f2+")는 원 밖에 있다.");
        }
    }   
}

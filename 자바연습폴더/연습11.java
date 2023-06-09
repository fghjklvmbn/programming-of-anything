import java.util.Scanner;

public class 연습11 {
    public static void main(String[] arg){
        char ch = 'b';
        int sel ;

        if(ch >= 'a' && ch <= 'z'){
            System.out.println("해당문자는 소문자입니다.");
        } else {
            System.out.println("해당문자는 소문자가 아닙니다.");
        }
        Scanner sc = new Scanner(System.in);
        sel = sc.nextInt();

        switch(sel){
            case 1:
                System.out.println("1번입니다.");
                break;
            case 2:
                System.out.println("2번입니다.");
                break;
            case 3:
                System.out.println("3번입니다.");
                break;
            case 4:
                System.out.println("4번입니다.");
                break;
            case 5:
                System.out.println("5번입니다.");
                break;
        }


    }
}

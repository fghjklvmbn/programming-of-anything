//

import java.util.Scanner;

public class 연습24 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        // flag == 0도
        int flag = 0;
        int a = sc.nextInt();
        if(flag > a){
            System.out.println("영하입니다.");
        } else if(flag == a){
            System.out.println("0도입니다.");
        } else if (flag < a ) {
            System.out.println("영상입니다.");
        }
        sc.close();
    } 
}

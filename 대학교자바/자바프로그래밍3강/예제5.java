package 대학교자바.자바프로그래밍3강;

import java.util.Scanner;

public class 예제5 {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("정수 5개를 입력하시오");
		int sum =0;
		for(int i =0;i<5; i++) {
			int n = sc.nextInt();
			if(n<0) {
				continue;
			} else {
				sum += n;
			}
		}
		System.out.println("양수의 합은 "+sum + "입니다.");
		
		sc.close();
	}
}

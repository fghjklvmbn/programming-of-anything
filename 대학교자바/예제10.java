package 대학교자바;

import java.util.Scanner;

public class 예제10 {
    	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("정수 3개를 입력하시오");
		int sum =0;
		int n = 0;
		for(int i = 0; i<3; i++) {
			try {
				n = sc.nextInt();
			}
			catch(Exception e) {
				System.out.println("정수가 아닙니다. 다시 입력해주세요");
				sc.next();
				i--;
				continue;
			}
			sum += n;
		}
		System.out.println("합은 " + sum);
		sc.close();
	}
}

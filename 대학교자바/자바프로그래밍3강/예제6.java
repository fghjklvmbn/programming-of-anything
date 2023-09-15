package 대학교자바.자바프로그래밍3강;

import java.util.Scanner;

public class 예제6 {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int array[] = new int[5];
		
		int max =0;
		System.out.println("정수 5개를 출력하시오");
		for(int i =0; i<5; i++) {
			array[i] = sc.nextInt();
			if(array [i] >max) {
				max = array[i];
			}
		}
		System.out.println("제일 큰수는 "+ max +"입니다.");
		
		sc.close();
	}

}

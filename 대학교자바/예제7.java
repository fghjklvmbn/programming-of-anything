package 대학교자바;

public class 예제7 {
    enum week{월, 화, 수, 목, 금, 토, 일}
	public static void main(String[] args) {
		int [] n = {1,2,3,4,5};
		String [] names = { "사과", "배", "바나나", "체리", "딸기", "포도"};
		
		int sum = 0;
		for(int k : n) {
			System.out.print(k+" ");
			sum += k;
		}
		
		System.out.println("합은 " + sum);
		for(String s : names) { // String의 s 에 names을 하나씩 갖고와서 반복 == names에 있는 것까지 반복함
			System.out.print(s+" "); // 반복 + 빈 문자열
		}
		System.out.println();
		
		for(week day : week.values()) {
			System.out.println(day + "요일");
		}
		System.out.println();
	}

}

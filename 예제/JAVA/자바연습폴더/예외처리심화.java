
// 끌어오기(주의사항: class앞부분을 대문자로 하면 오류)
class parkexception extends Exception{
	
}

public class 예외처리심화 {
	public void park(String pa) {
		try {
			if("박".equals(pa)) {
				throw new parkexception();
			}
		} catch (parkexception e){
			System.out.println("parkexception이 발생하였습니다!");
		}
	}
	public static void main(String[] args) {
		예외처리심화 예외처리심화 = new 예외처리심화();
		예외처리심화.park("박");
		예외처리심화.park("경환");
	}

}

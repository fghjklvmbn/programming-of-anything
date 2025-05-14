/*
 * 상속을 이용해서 runtimeexception 을 끌어와서
 * 예외발생시 컨트롤타워를 parkexception으로 바꿔놓는 작 
 */
class parkexception extends RuntimeException{
}

public class 예외처리 {
	public void park(String pk) {
		if("park".equals(pk)) {
			throw new parkexception();
		}
		System.out.println("박");
	}

	public static void main(String[] args) {
		예외처리 예외처리 = new 예외처리();
		예외처리.park("park");
		예외처리.park("pa");

	}

}
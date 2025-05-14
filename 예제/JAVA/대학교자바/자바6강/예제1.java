package 대학교자바.자바6강;

class person{
	private int weight;
	int age;
	protected int height;
	public String name;
	
	public void setWeight(int weight) {
		this.weight = weight;
	}
	public int getWeight() {
		return weight;
	}
}

class Student extends person {
	public void set() {
		age = 30;
		name = "홍길동";
		height = 175;
		setWeight(99);
	}
}

public class 예제1 {
    public static void main(String[] args){
        Student s = new Student();
		s.set();
    }    
}

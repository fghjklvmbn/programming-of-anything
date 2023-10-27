package 대학교자바.자바8강;

class Point1 extends point{
    public Point1(int x, int y) {
        super(x, y);
        //TODO Auto-generated constructor stub
    }
    public String toString(){
        return "point(" + x + "," + y + ")";
    }
}

public class 예제4 {
    public static void main(String[] args) {
        point p = new point(2, 3);
        System.out.println(p.toString());
        System.out.println(p + "입니다.");
    }
}

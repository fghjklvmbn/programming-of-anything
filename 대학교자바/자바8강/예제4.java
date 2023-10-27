package 대학교자바.자바8강;

class point {
    private int x,y;
    public point(int x, int y){
        this.x = x;
        this.y = y;
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

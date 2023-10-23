package 대학교자바.자바6강;

class shape {
    public void draw(){
        System.out.println("shape");
    }
}

class line extends shape {
    // 오버라이딩
    public void draw(){
        System.out.println("line"); // 오버로딩
    }
}

class rect extends shape {
    // 오버라이딩
    public void draw(){
        System.out.println("rect"); // 오버로딩
    }
}

public class 예제3 {
    // paint 으로 클래스 호출
    static void paint(shape p){
        p.draw(); // 호출
    }
    public static void main(String[] args){
        // line ln = new line();
        // paint(ln);
        // paint(new shape());
        // paint(new rect());

        shape start,last,obj;
        start = new line();
        last = start;
        obj = new rect();
        last = obj;
        obj = new line();
        last = obj;
        System.out.println(last);
        shape p  = start;
        while(p!= null){
            p.draw();
        }
    }
}

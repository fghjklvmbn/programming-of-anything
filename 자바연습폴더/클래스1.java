class car {
    // 필드 생성
    private String modelname;
    private int modelyear;
    private String color;

    car(String modelname, int modelyear, String color){ //생성자
        //this는 private된 것과 연동시켜주는 그런 기능(포인터 비스무리한 기능)
        this.modelname = modelname;
        this.modelyear = modelyear;
        this.color = color;
    }
    public String getmodel(){ // 메소드
        return this.modelyear+"년식" + this.modelname + "" + this.color;
    }
}

public class 클래스1 {
    public static void main(String[] args){
        car c = new car(null, 0, null);
        int a[][] = new int[3][3];
        a[0][1] = {{1,2}};
        


    }
}

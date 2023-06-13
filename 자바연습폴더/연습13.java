
public class 연습13 {
    public void main(String[] args){
        for(int i = 1; i <= 100; i++){ // 1 부터 100까지 반복
            if(i%5==0 || i%7==0){ // 5의 몫이 없거나 7의 몫도 없으면 출력
                System.out.println(i);
            }else{ // 둘다 아니라면 건너뛰기
                continue;
            }
        }
    }
}

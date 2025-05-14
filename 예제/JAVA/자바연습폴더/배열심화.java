import java.util.Arrays;

public class 배열심화 {
    public static void main(String[] args){
        int[] arr1 = new int[]{1,2,3,4,5};
        int newLen = 10;

        int[] arr2 = new int[newLen]; // 배열 길이를 10으로 맟춤
        //              복사대상  시작지점  붙혀넣을대상    시작지점   배열길이
        System.arraycopy(arr1, 0, arr2, 0, arr1.length); // 배열복사(기본 arr1에 있는 숫자를 arr2로 복사)
        // arrays.copyof()함수를 통해 복사대상    배열의 길이   정할수 있음.(java.util.arrays를 import하는 방식으로 사용가능)
        int[] arr3 = Arrays.copyOf(arr1, 10);
        // 배열이 저장된것을 .clone함수로 불러내서 복사
        int arr4[] = (int[])arr1.clone();
        // 인덱스로 복사
        int arr5[] = new int[newLen];

        for(int i = 0; i<arr1.length; i++){System.out.println(arr1[i]);}
        System.out.println("");
        for(int i = 0; i<arr2.length; i++){System.out.println(arr2[i]);}
        System.out.println("");
        for(int i = 0; i<arr3.length; i++){System.out.println(arr3[i]);}
        System.out.println("");
        for(int i = 0; i<arr4.length; i++){System.out.println(arr4[i]);}
        System.out.println("");
        for(int i = 0; i<arr5.length; i++){System.out.println(arr5[i]);}
        System.out.println("");

    }
}

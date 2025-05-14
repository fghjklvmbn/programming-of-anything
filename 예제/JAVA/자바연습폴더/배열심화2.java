public class 배열심화2 {
    public static void main(String[] args){
        int arr[] = new int[]{1,2,3,4,5};
        int arr2[] = new int[]{1,2,3,4,5};

        for(int e : arr) {
            System.out.println(e + " ");
        }

        for (int i = 0; i<arr.length; i++){
            arr[i] += 10;
            System.out.println(arr[i]);
        }
        
        for (int e : arr2){
            e += 10;
            System.out.println(e+" ");
        }
    }
}

import java.util.ArrayList;

public class Main {
    public static void main(String[] args){
        int arr[] = {2,3,5,1,7,21,43};

        int num = arr[arr.length - 1];

        for(int i = arr.length - 2; i >= 0; i--){
            arr[i + 1] = arr[i];
        }

        arr[0] = num;

        for(int i =0; i <arr.length ; i++){
            System.out.println(arr[i]);`
        }
    }
}
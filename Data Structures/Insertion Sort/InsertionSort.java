package datastructures;

public class InsertionSort {
    public int[] sort(int[] arr){
        for(int i = 0;i < arr.length;i = i + 1){
            int current_val = arr[i];
            int comp_place = i - 1;
            while(comp_place >= 0 & current_val < arr[comp_place]){
                arr[comp_place + 1] = arr[comp_place];
                comp_place = comp_place - 1;
            }
            arr[comp_place + 1] = current_val;
        }
        return arr;
    }
    public static void main(String args[]){
        InsertionSort is = new InsertionSort();
        int arr[] = {4,5,3,2,1};
        int sorted_arr[] = is.sort(arr);
        for(int i = 0;i < 5;i = i + 1){
            System.out.print(sorted_arr[i]);
        } 
    }
}

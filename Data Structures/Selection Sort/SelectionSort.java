package datastructures;

public class SelectionSort {

    public int[] sort(int[] a){
        int N = a.length;
        for(int i = 0;i < N;i = i + 1){
            int min = i;
            for(int j = i + 1;j < N;j = j + 1){
                if(a[j] < a[min])
                    min = j;
            }
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
        return a;
    }
    
    public static void main(String args[]){
        SelectionSort ss = new SelectionSort();
        int arr[] = {4,5,3,2,1};
        int sorted_arr[] = ss.sort(arr);
        for(int i = 0;i < 5;i = i + 1){
            System.out.print(sorted_arr[i]);
        }
        
    }
}

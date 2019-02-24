package datastructures;

public class BinarySearch {
    public static int Binary_Search(int key,int[] a){
    { // Array must be sorted.
        int lo = 0;
        int hi = a.length - 1;
        while (lo <= hi)
        { // Key is in a[lo..hi] or not present.
            int mid = lo + (hi - lo) / 2;
            if (key < a[mid]) hi = mid - 1;
            else if (key > a[mid]) lo = mid + 1;
            else return mid;
        }
        return -1;
    }
}
    public static void main(String[] args) {
        int key = 72;
        int[] Array;
        Array = new int[]{1,2,3,4,5,6,72,77,99,102};
        int result = Binary_Search(key,Array);
        System.out.println(result);
        
    }
    
}

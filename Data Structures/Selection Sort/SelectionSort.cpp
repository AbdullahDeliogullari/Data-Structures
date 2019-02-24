#include <iostream>

using namespace std;
class SelectionSort{
public:
    int *arr_sort(int *arr,int n);
    void swap_val(int *x,int *y);
    void array_content(int *arr,int n);

};

int *SelectionSort::arr_sort(int *arr,int n){
    int i,j;
    for(i = 0;i < n;i = i + 1){
        int min_val = i;
        for(j = i + 1;j < n;j = j + 1){
            if(arr[min_val] > arr[j])
                min_val = j;
        }
        swap_val(&arr[min_val],&arr[i]);
    }
    return arr;
}

void SelectionSort::swap_val(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort::array_content(int *arr,int n){
    for(int i = 0;i < n;i = i + 1)
        printf("%d\n",*(arr + i));
}

int main()
{
    SelectionSort Selsort = SelectionSort();
    int arr[] = {1,20,5,6,3,4};
    int n = 6;
    int *sortedarr = Selsort.arr_sort(arr,n);
    Selsort.array_content(sortedarr,n);
}


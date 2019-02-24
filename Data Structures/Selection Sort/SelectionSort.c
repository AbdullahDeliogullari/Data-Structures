#include <stdio.h>

void swap(int *x,int *y);
int *SelectionSort(int *arr,int n);
void array_content(int *arr,int n);

int main(){
    int arr[] = {1,20,5,6,3,4};
    int n = 6;
    int *sortedarr = SelectionSort(arr,n);
    array_content(sortedarr,n);
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int *SelectionSort(int *arr,int n){
    int i,j;
    for(i = 0;i < n;i = i + 1){
        int min_val = i;
        for(j = i + 1;j < n;j = j + 1){
            if(arr[min_val] > arr[j])
                min_val = j;
        }
        swap(&arr[min_val],&arr[i]);
    }
    return arr;
}

void array_content(int *arr,int n){
    for(int i = 0;i < n;i = i + 1)
        printf("%d\n",*(arr + i));
}

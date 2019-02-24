#include <stdio.h>
#include <stdlib.h>

int *InsertionSort(int *arr,int n);
void array_content(int *arr,int n);

int main(){
    int arr[] = {1,20,5,6,3,4};
    int n = 6;
    int *sortedarr = InsertionSort(arr,n);
    array_content(sortedarr,n);
}

int *InsertionSort(int *arr,int n){
    int i;
    for(i = 1;i < n;i = i + 1){
        int current_val = *(arr + i);
        int comp_place = i - 1;
        while(comp_place >= 0 & current_val < *(arr + comp_place)){
            *(arr + comp_place + 1) = *(arr + comp_place);
            comp_place = comp_place - 1;
        }
        *(arr + comp_place + 1) = current_val;
    }
    return arr;
}

void array_content(int *arr,int n){
    for(int i = 0;i < n;i = i + 1)
        printf("%d\n",*(arr + i));
}

#include <iostream>

using namespace std;

class InsertionSort{
public:
    int *arr_sort(int *arr,int n);
    void array_content(int *arr,int n);
};

int *InsertionSort::arr_sort(int *arr,int n){
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

void InsertionSort::array_content(int *arr,int n){
    for(int i = 0;i < n;i = i + 1)
        printf("%d\n",*(arr + i));
}

int main()
{
    InsertionSort Inssort = InsertionSort();
    int arr[] = {1,20,5,6,3,4};
    int n = 6;
    int *sortedarr = Inssort.arr_sort(arr,n);
    Inssort.array_content(arr,n);
}

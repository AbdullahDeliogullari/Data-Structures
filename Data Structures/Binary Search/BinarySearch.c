// C program to implement iterative Binary Search

#include <stdio.h>
#include <stdlib.h>

int arrayLength(int arr[])
{
    int i;
    for(i = 0;arr[i] != '\0';i = i + 1);
    return i;
}
int binarySearch(int arr[],int lower,int higher,int key)
{
    int mid;
    while(lower <= higher)
    {
        mid = lower + (higher - lower)/2;
        if(key < arr[mid])
            higher = mid - 1;
        else if(key > arr[mid])
            lower = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int array[] = {2, 3, 4, 10, 40,45,50,55,60,70,77};
    int arraysize = arrayLength(array) - 1;
    int key = 50;
    int result = binarySearch(array,0,arraysize,key);
    printf("%d\n",result);
}

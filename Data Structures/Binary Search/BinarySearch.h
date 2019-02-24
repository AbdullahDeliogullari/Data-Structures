#include <iostream>
using namespace std;

class BinarySearch
{
private:
    int key;
    int a[];
public:
    int rank(int key,int arr[]);
    int arrayL(int arr[]);
};

int BinarySearch::arrayL(int arr[])
{
    int i;
    for(i = 0;arr[i] != '\0';i = i + 1);
    return i;
}

int BinarySearch::rank(int key,int arr[])
{
    int lower = 0;
    int higher = arrayL(arr);
    while(lower <= higher)
    {
        int mid = lower + (higher - lower) / 2;
        if(key < arr[mid])
            higher = mid - 1;
        else if(key > arr[mid])
            lower = mid + 1;
        else
            return mid;
    }

}

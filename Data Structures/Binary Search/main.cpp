#include <iostream>
#include "BinarySearch.h"

using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 40,45,50,55,60,70,77};
    int key = 70;
    BinarySearch BSearch;
    cout << BSearch.rank(key,arr);
}

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // Base Case
    if (size == 1 || size == 0)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool smallerP = isSorted(arr + 1, size - 1);
        return smallerP;
    }
}

int main()
{
    int arr[] = {2, 4, 9, 8, 10};
    int size = 5;

    int ans = isSorted(arr, size);

    if (ans)
    {
       cout << "Array is Sorted" << endl;
    }else{
        cout << "Array is not sorted" << endl;
    }
    
}
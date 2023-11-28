#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{

    // Base Case
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 8, 9};
    int size = 6;
    int key = 10;

    bool ans = binarySearch(arr, 0, size - 1, key);
    if (ans)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
}
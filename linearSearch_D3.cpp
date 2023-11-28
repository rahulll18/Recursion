#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Size is : " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    printArray(arr, size);
    // Base Case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 1;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
}
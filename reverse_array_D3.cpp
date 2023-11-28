#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
    //Base Case
    if(size == 0) return ;

    cout << arr[size-1] << " ";
    printArray(arr , size-1);

}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printArray(arr, size);
}
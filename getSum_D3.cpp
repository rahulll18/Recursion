#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // Base Case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int smallerP = getSum(arr + 1, size - 1);
    int sum = arr[0] + smallerP;
    return sum;
}

int main()
{
    int arr[] = {2, 4, 6, 9};
    int size = 4;

    int ans = getSum(arr, size);
    cout << "Sum is " << ans;
}
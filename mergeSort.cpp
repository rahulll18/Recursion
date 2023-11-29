#include <iostream>
using namespace std;

void mergeArray(int *arr, int s, int e, int mid)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Created two new Array
    int *first = new int[len1];
    int *second = new int[len2];

    int startIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[startIndex];
        startIndex++;
    }

    startIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[startIndex];
        startIndex++;
    }

    // Merge Two sorted Arrays
    int i = 0;
    int j = 0;
    startIndex = s;

    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[startIndex++] = first[i++];
        }

        else if (second[j] < first[i])
        {
            arr[startIndex++] = second[j++];
        }
    }

    while (i < len1)
    {
        arr[startIndex++] = first[i++];
    }

    while (j < len2)
    {
        arr[startIndex++] = second[j++];
    }
}

void mergSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // Left Part Sorted
    mergSort(arr, 0, mid);

    // Right Part Sorted
    mergSort(arr, mid + 1, e);

    mergeArray(arr, s, e, mid);
}

int main()
{
    int arr[7]{38, 26, 43, 3, 9, 82, 10};
    int n = 7;

    mergSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
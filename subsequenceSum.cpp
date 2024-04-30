#include <bits/stdc++.h>
using namespace std;

void printSum(int i, vector<int> &ds, int s, int arr[], int sum, int n)
{
   
    if (i == n)
    {
        if (s == sum)
        {
            for (auto i : ds)
                cout << i << " ";
            cout << endl;
        }

        return;
    }

    // pick and add element in sum variable
    ds.push_back(arr[i]);
    s += arr[i];
    printSum(i + 1, ds, s, arr, sum, n);

    // not pick the element
    s -= arr[i];
    ds.pop_back();
    printSum(i + 1, ds, s, arr, sum, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> ds;
    printSum(0, ds, 0, arr, sum, n);
}
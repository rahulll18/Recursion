#include <bits/stdc++.h>
using namespace std;

// pick and not pick
void printF(int ind, vector<int> &res, int arr[], int n)
{
    if (ind >= n)
    {
        for (auto i : res)
            cout << i << " ";
        cout << endl;

        return;
    }
    // pick the element
    res.push_back(arr[ind]);
    printF(ind + 1, res, arr, n);

    // not pick the element
    res.pop_back();
    printF(ind + 1, res, arr, n);
}

int main()
{
    int n = 3;
    int arr[] = {3, 1, 2};
    vector<int> res;
    printF(0, res, arr, n);
}
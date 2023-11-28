#include <iostream>
using namespace std;

int nSum(int n)
{
    //Base Case
    if (n==0)
    {
        return 0;
    }

    //Recursive Relation
    int res = n + nSum(n-1);
    return res;
    
}

int main()
{
    int n;
    cin >> n;

    int sum = nSum(n);
    cout << "Sum is : " << sum << endl;
}
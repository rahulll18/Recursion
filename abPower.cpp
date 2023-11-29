#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;

    int powerAns = power(a, b);
    cout << "The answer is : " << powerAns;
}
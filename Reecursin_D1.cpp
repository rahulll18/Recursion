#include <iostream>
using namespace std;

int fact(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    int smallerP = fact(n - 1);
    int bigP = n * smallerP;

    return bigP;
}

int main()
{
    int n;
    cin >> n;

    int ans_factorial = fact(n);

    cout << "Factorial is : " << ans_factorial;
}
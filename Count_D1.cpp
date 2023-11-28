#include <iostream>
using namespace std;

void count(int n)
{
    // base Case
    if (n == 0)
    {
        return;
    }

    // Tail Recursion
    cout << n << " ";

    count(n - 1);
}

int main()
{
    int n;
    cin >> n;

    count(n);
}
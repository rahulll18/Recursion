#include <iostream>
using namespace std;

void reachedHome(int src, int dest)
{
    cout << "Source is : " << src << " Destination is : " << dest << endl;

    // Base Condition
    if (src == dest)
    {
        cout << "Reached Home" << endl;
        return ;
    }

    // Processing
    src++;

    // Recursive Call
    reachedHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachedHome(src, dest);
}
#include <iostream>
using namespace std;

void reverseStr(string &name, int i, int j)
{
    //Base Case
    if(i > j) return;

    swap(name[i] , name[j]);
    i++;
    j--;

    //Recursive Call
    reverseStr(name , i , j);
}

int main()
{
    string name = "Rahul";

    reverseStr(name, 0, name.length() - 1);

    cout << name << endl;
}
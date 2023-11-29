#include <iostream>
using namespace std;

bool isPalindrome(string name, int i, int j)
{
    // Base Case
    if (i > j)
    {
        return true;
    }

        if (name[i] != name[j])
        {
            return false;
        }

        // Recursive Call
        else
        {
            bool ans = isPalindrome(name, i + 1, j - 1);
            return ans;
        }
    
}

int main()
{
    string name = "abba";

    bool ans = isPalindrome(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "It is Palindrome" << endl;
    }
    else
    {
        cout << "It is not Palindrome" << endl;
    }
}
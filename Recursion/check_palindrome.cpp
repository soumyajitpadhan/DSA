#include <iostream>

using namespace std;

bool check(string str, int i, int j)
{
    // Base case
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // Recursive call
        return check(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "abba";
    cout << endl;

    bool isPalindrome = check(name, 0, name.length() - 1);
    if (isPalindrome)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not Palindrome." << endl;
    }

    return 0;
}

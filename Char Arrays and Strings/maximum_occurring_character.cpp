#include <iostream>

using namespace std;

// T.C -> O(n) , S.C -> O(1)

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // Create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lower case
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else // upper case
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout << "Enter a strings: ";
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;
    return 0;
}

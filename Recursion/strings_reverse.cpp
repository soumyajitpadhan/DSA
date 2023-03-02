#include <iostream>

using namespace std;

void sReverse(string &s, int i, int j)
{
    cout << "call received for " << s << endl;
    // Base case
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;

    // Recursive call
    sReverse(s, i, j);
}

int main()
{
    string s = "abcde";
    sReverse(s, 0, s.length() - 1);
    cout << s << endl;

    return 0;
}

bool isvalid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char lowerCase(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))            
    {
        return ch;
    }
    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    
    while(start <= end)
    {
        if(!isvalid(s[start]))
        {
            start++;
        }
        else if(!isvalid(s[end]))
        {
            end--;
        }
        else
        {
            if(lowerCase(s[start]) != lowerCase(s[end]))
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
    }
    return true;
}

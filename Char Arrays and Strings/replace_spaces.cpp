string replaceSpaces(string &str){
    //T.C = O(n) , S.C = O(n)
	string temp = "";
    
    for(int i = 0; i<str.length(); i++) {
        if(str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}


string replaceSpaces(string &str){
	// T.C = O(n) , S.C = O(1)
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            str.replace(i, 1, "@40");
        }
    }
    return str;
}

#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string& s, int i, int j)
{
    // base case
    if(i > j)
    {
        return true;
    }

    if(s[i] != s[j])
    {
        return false; 
    }
    else
    {
        //recursive call
        return checkPalindrome(s, i+1, j-1);
    }
}
int main()
{
    string s = "abba";

    bool ans = checkPalindrome(s, 0, s.length()-1);

    if(ans)
    {
        cout<< "String is Palindrome"<< endl;
    }
    else
    {
        cout<< "Not a Palindrome"<< endl;
    }

    return 0;
}
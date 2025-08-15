#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
 {
    while(s.length()!=0  &&   s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
    
}
int main()
{
    string s1 = "daabcbaabcbc";
    string s2 = "abc";

    cout<<removeOccurrences(s1, s2);

    return 0;


}
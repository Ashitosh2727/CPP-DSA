#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x)
{
    //base case
    if(s.empty() || s.top() > x)
    {
        s.push(x);
        return;
    }

    int n = s.top();
    s.pop();

    //recursive call
    solve(s, x);

    s.push(n);
}
void sortedStack(stack<int>& s)
{
    //base case
    if(s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    sortedStack(s);

    solve(s, num);
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(10);
    s.push(3);

    sortedStack(s);

    while(!s.empty())
    {
        cout<< s.top() << endl;
        s.pop();
    }
}
#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>& s, int x)
{
    //base case
    if(s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    sortedInsert(s, x);

    s.push(num);
}
void sortStack(stack<int>& stack)
{
    //base case
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    sortStack(stack);

    sortedInsert(stack, num);
}
int main()
{
    stack<int> s;
    s.push(30);   
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    sortStack(s);
    cout << "Sorted stack is : \n";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

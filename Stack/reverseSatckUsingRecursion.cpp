#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int x)
{
    //base case
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s, x);

    s.push(num);
}
void reverseSatck(stack<int> &stack)
{
    //base case
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseSatck(stack);

    insertAtBottom(stack, num);
}
int main()
{
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    reverseSatck(myStack);

    while(!myStack.empty())
    {
        cout<<myStack.top()<<endl;
        myStack.pop();
    }

    return 0;
}
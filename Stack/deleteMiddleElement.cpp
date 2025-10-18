#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int count, int size)
{
    //base case
    if(count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
} 

void deleteMiddleElement(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int N = s.size();

    deleteMiddleElement(s, N);

    while(!s.empty())
    {
        cout<< s.top() << " ";
        s.pop();
    }
    cout<< endl;

    return 0;
}

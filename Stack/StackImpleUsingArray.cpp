#include<bits/stdc++.h>
using namespace std;

class Stack{
    //Properties
    public:
    int *arr;
    int top;
    int size;
    
    //behavior
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    // Push Opeartion
    void push(int x)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout<< "stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<< "Stack UnderFlow" << endl;
        }
    }

    int peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<< "Stack is Empty"<< endl;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(5);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isEmpty())
    {
        cout<< s.peak() << " ";
        s.pop();
    }
    cout<< endl;
    cout<< s.isEmpty() << endl;

    return 0;
}
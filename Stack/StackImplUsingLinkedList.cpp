#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

class Stack{
    public:
    Node* top;

    // Constructor
    Stack()
    {
        top = NULL;
    }

    // push opeartion
    void push(int data)
    {
        Node* newNode = new Node(data);
        if(!newNode)
        {
            cout<< "Stack OverFlow" << endl;
        }
        else
        {
            newNode -> next = top;
            top = newNode;
        }
    }

    // pop opeartion
    void pop()
    {
        if(top == NULL)
        {
            cout<< "Stack UnderFlow" << endl;
            return;
        }
        else
        {
            Node* temp = top;
            top = top -> next;
            delete temp;
        }
    }

    int peak()
    {
        if(top != NULL)
        {
            return top -> data;
        }
        else
        {
            cout<< "Stack is Empty"<< endl;
        }
    }

    bool isEmpty()
    {
        if(top == NULL)
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
    Stack s;
    s.push(10);
    s.push(20);

    while(!s.isEmpty())
    {
        cout<< s.peak() << " ";
        s.pop();
    }


    return 0;
}
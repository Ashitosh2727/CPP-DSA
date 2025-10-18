#include<bits/stdc++.h>
using namespace std;

// Stack using Linked List
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

    //Constructor
    Stack()
    {
        top = NULL;
    }

    //push opreation
    void push(int data)
    {
        Node* newNode = new Node(data);
        if(!newNode)
        {
            cout<< "Stack OverFlow" << endl;
            return;
        }
        newNode -> next = top;
        top = newNode;
    }

    //pop operation
    void pop()
    {
        if(top == NULL)
        {
            cout<< "Stack UnderFlow"<< endl;
            return;
        }

        Node* temp = top;
        top = top -> next;
        delete temp;
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
            return -1;
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


//Stack using Array
class Stack{

    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size)
    {
         this -> size = size;
         arr = new int[size];
         top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<< "Stack OverFlow "<< endl;
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
            cout<< "Stack UnderFlow"<< endl;
        }
    }

    int  peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<< "Stack is Empty"<< endl;
            return -1;
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

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<< st.peak()<< endl;
    st.pop();
    cout<< st.peak()<< endl;
    st.pop();
    cout<< st.peak()<< endl;
    st.pop();
    cout<< st.peak()<< endl;

    if(st.isEmpty())
    {
        cout<< "Stack is Empty"<< endl;
    }
    else
    {
        cout<< "Stack is not Empty"<< endl;
    }
    
    /*
    // cration of stack
    stack<int> s;

    // push operatiion
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout<< "Printing top element : "<< s.top() << endl;

    if(s.empty())
    {
        cout<< "Stack is empty" << endl;
    }
    else
    {
        cout<< "Stack is not empty" << endl;
    }

    cout<< "Size of stack is :  "<< s.size() << endl;
    */

    return 0;

}
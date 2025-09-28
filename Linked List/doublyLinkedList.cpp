#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< "Memory free for node data "<< value << endl;
    }
};

//traversing a linked list
void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

//gives length of linked list
int getLength(Node* head)
{
    int count = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}
void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail, int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* &head,Node* &tail, int position, int data)
{
    //first position
    if(position == 1)
    {
        insertAtHead(head,tail, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    //insert at last position
    if(temp -> next == NULL)
    {
        insertAtTail(head, tail, data);
        return; 
    }

    //create a node
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(Node* &head,Node* &tail , int position)
{
    // deleting starting node
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;

        //memory free
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        // If deleting the last node
        if (curr->next == NULL)
        {
            tail = prev;
        }
        else
        {
            curr->next->prev = prev;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;  
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    // cout<< getLength(head) << endl;

    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtHead(head, tail, 9);
    print(head);

    insertAtTail(head, tail, 25);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    
    insertAtPosition(head, tail, 1, 101);
    print(head);

    insertAtPosition(head, tail, 7, 102);
    print(head);

    deleteNode(head,tail, 7);
    print(head);

    cout<< "Head "<< head -> data << endl;
    cout<< "Tail "<< tail -> data << endl;
    return 0;
}
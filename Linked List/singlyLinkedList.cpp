#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;  
    Node* next;

    //Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this -> data;
        // memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<< "Memory is free for node with data "<< value<< endl;
    }
};

void insertAtHead(Node* &head, int d)
{
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    // tail = tail -> next;
    tail = temp;


}

void insertAtPosition(Node* &tail, Node* head,int position, int d)
{
    Node* temp = head;
    int cnt = 1;

    //insert at start
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    while(cnt < position - 1)
    {
        temp = temp ->next;
        cnt++;
    }
    //insert at tail

    if(temp -> next == NULL)
    {
        insertAtTail(tail, d);
        return; 
    }
     //new node create for d
     Node* nodeToInsert = new Node(d);
     
     nodeToInsert -> next = temp -> next;
     temp -> next = nodeToInsert;

}
void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

void deleteNode(int position, Node* &head)
{
    //delete first node
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        //memory free start node
        delete temp;
    }
    else
    {
        //delete any middle  or any node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main()
{
    //Created new node
    Node* node1 = new Node(10);

    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

    //head pointed to node1 
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    
    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail,head, 4, 22);
    print(head);

    // cout<< "head " << head -> data << endl;
    // cout<< "tail " << tail -> data << endl;

    // deleteNode(4, head);
    deleteNode(3, head);
    print(head);

    return 0;
}
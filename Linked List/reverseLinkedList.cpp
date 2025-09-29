#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data<< " ";
        temp = temp -> next;
    }
    cout<< endl;
}
int main()
{
    //Creating a linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original Linked List: ";
    print(head);

    //reverse linked list
    cout<< "Revrsed Linked List: ";
   head = reverse(head);

    print(head);

    return 0;
}
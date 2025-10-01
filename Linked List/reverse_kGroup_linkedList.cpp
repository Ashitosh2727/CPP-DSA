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

Node* kreverse(Node* head, int k)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int count = 0;

    //step1: reverse first k nodes
    while(curr != NULL && count < k)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //step2: recursive call
    if(forward != NULL)
    {
        head -> next = kreverse(forward, k);
    }

    //step3 = return head of reversed list
    return prev;
}

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
int main()
{
    //Creating a linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout<< "Original Linked List : ";
    print(head);

    cout<< "k - Reversed Linked List : ";
    int k = 2;
    head = kreverse(head, k);
    print(head);

    return 0;
}
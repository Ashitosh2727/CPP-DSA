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

Node* middle(Node* head)
{
    if(head == NULL || head ->next == NULL)
    {
        return head;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL )
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}
int main()
{
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next = new Node(6);

   Node* mid = middle(head);
   cout<< "Middle Node is : "<< mid -> data << endl;
   return 0;
}
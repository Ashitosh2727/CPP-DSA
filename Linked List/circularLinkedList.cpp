#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
    this -> data = data;
    this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< "Memory is free of node with data "<< value << endl;
    }
};

bool isCircularList(Node* head)
{
    //empty list
    if(head == NULL)
    {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if(temp == head)
    {
        return true;
    }

    return false;
}

bool detectLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;
    while(temp != NULL)
    {
        //cycle is present
        if(visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

// floyd's cycle detection algorithm
Node* floydDetectLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    
    while(slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}
void insertNode(Node* &tail, int element, int data)
{
    //assuming that the element is present in the list

    //Empty list
    if(tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else
    {
        //non-empty list
        // assuming that element is present
        Node* curr = tail;

        while (curr -> data != element)
        {
            curr = curr -> next;
        }

        //element found -> curr representing element wala node
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while (temp -> next != startOfLoop)
    {
        temp = temp -> next;
    }

    temp -> next = NULL;
    
}
void deleteNode(Node* &tail, int value)
{
    //empty list
    if(tail == NULL)
    {
        cout<< "List is empty. please check again" <<endl;
        return; 
    }
    else
    {
        //non - empty
        //assuming value is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        //  1 node Linked List
        if(curr == prev)
        {
            tail = NULL;
        }

        // >2 Node linked list  
        if(tail == curr)
        {
            tail = prev;    
        }
        curr -> next = NULL;
        delete curr;
    }
}
void print(Node* tail)
{
     Node* temp = tail;

     do{
        cout<< tail -> data << " ";
        tail = tail -> next;
     }while (tail != temp);  
     cout<< endl;
     
}
int main()
{
    Node* tail = NULL;

    //empty list me insert 
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

     
    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 9, 10);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    // // deleteNode(tail, 3);
    // // print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    // if(isCircularList(tail))
    // {
    //     cout<< "Linked List is circular in nature "<< endl;
    // }
    // else
    // {
    //     cout<< "Linked List is not circular in nature "<< endl;
    // }

    // if(detectLoop(tail))
    // {
    //     cout<< "Cycle is prsent "<< endl;
    // }
    // else
    // {
    //     cout<< "Cycle is not present "<< endl;
    // }

    if(floydDetectLoop(tail) != NULL)
    {
        cout<< "Cycle is prsent at "<< tail -> data << endl;
    }
    else
    {
        cout<< "Cycle is not present "<< endl;
    }
    Node* loop = getStartingNode(tail);
    cout<< "Starting node of loop is  "<< loop -> data << endl;

    removeLoop(tail);
    print(tail);

    return 0;
}
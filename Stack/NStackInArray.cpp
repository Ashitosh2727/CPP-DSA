#include<bits/stdc++.h>
using namespace std;

class NStack{
    int *arr;
    int *top;
    int *next;

    int n, s;
    int freeSpot;

    public:
    NStack(int N, int S)
    {
        int n = N;
        int s = S;

        arr = new int [s];
        top = new int [n];
        next = new int [s];

        //top initialize
        for(int i = 0; i<n; i++)
        {
            top[i] = -1;
        }

        //next initialize
        for(int i = 0; i<s; i++)
        {
            next[i] = i+1;
        }

        // update last index value to -1
        next[s - 1] = -1;

        //initialize freespot
        freeSpot = 0;
    }

    // push function
    bool push(int x, int m)
    {
        if(freeSpot == -1)
        {
            return false;
        }

        // find index
        int index = freeSpot;

        // update freespot
        freeSpot = next[index];

        // insert element
        arr[index] = x;

        // update next
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;

        return true;
    }

    // pop operation
    int pop(int m)
    {
        // check underflow
        if(top[m - 1] == -1)
        {
            return -1;
        }

        // find index
        int index = top[m - 1];

        // update top
        top[m - 1] = next[index];

        // update next
        next[index] = freeSpot;

        // update freespot
        freeSpot = index;

        // return element
        return arr[index];
    }
};

int main()
{
    NStack s(3, 6);
    s.push(10, 1);
    s.push(20, 1);
    s.push(30, 2);
    s.push(40, 2);
    s.push(50, 3);
    s.push(60, 3);

    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    cout<<s.pop(3)<<endl;

    return 0;
}
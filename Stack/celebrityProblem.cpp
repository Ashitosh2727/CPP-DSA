#include<bits/stdc++.h>
using namespace std;

bool knows(int a, int b, vector<vector<int>> &M, int n)
{
    if(M[a] [b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int celebrity(vector<vector <int>>& M, int n)
{
    stack<int> s;
    // step 1 : push all elements in stack
    for(int i = 0; i<n; i++)
    {
        s.push(i);
    }

    // step 2 : get 2 elements and compare them

    while(s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(a, b, M, n))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int candidate = s.top();
    // step 3 : single element in a stack is a potential celebrity
    // so verify it

    bool rowCheck = false;
    int zeroCount = 0;
    for(int i = 0; i<n; i++)
    {
        if(M[candidate] [i] == 0)
        {
            zeroCount++;
        }
    }

    // all zeros
    if(zeroCount == n)
    {
        rowCheck = true;
    }

    //column check
    bool colCheck = false;
    int oneCount = 0;
    for(int i = 0; i<n; i++)
    {
        if(M[i] [candidate] == 1)
        {
            oneCount++;
        }
    }

    if(oneCount == n-1) 
    {

        colCheck = true;
    }
    if(rowCheck == true && colCheck == true)
    {
        return candidate;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int n = 3;
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};    
    cout<< celebrity(M, n);
    return 0;
}
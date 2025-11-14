#include<bits/stdc++.h>
using namespace std;

class SpecialStack{
    stack<int> s;
    int mini;

    public:

    void push(int data)
    {
        // for first element
        if(s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if(data < mini)
            {
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if(s.empty())
        {
            return -1;
        }
        
        int curr = s.top();
        if(curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMin = mini;
            mini = 2*mini - curr;
            return prevMin;
        }
    }

    int top()
    {
        if(s.empty())
        {
            return -1;
        }

        int curr = s.top();
        if(curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int getMin()
    {
        if(s.empty())
        {
            return -1;
        }
        else
        {
            return mini;
        }
    }
};

int main()
{
    SpecialStack s;
    s.push(10);
    s.push(20);
    cout<<s.getMin()<<endl;
    s.push(5);
    cout<<s.getMin()<<endl;
    s.push(3);
    cout<<s.getMin()<<endl;
    s.pop();
    cout<<s.getMin()<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
        {
            cout<<"Not a Prime Number for:"<< i<< endl;
        }
        else
        {
            cout<<"Prime Number for:"<< i<< endl;
        }
        i = i + 1;
    }
    return 0;
}
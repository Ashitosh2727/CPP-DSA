#include<bits/stdc++.h>
using namespace std;

int modularExponentitation(int x, int n, int m)
{
    int res = 1;
    while(n>0)
    {
        if(n&1)
        {
            //odd 
            res = ((res) * (x)%m)%m;
        }
        x = ((x)%m * (x)%m)%m;
        n = n >> 1; 
    }
    return res;
}
int main()
{
    int x,n,m;
    cin>> x>> n>> m;

    int ans =  modularExponentitation(x, n, m);

    cout<< ans;
    return 0;
    
}
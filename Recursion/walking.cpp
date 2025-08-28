#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout<< "Source: "<< src<< " Destination: "<< dest<< endl;
    //base case
    if(src == dest)
    {
        cout<< "Pauch gaya"<< endl;
        return ;
    }

    //processing
    src++;
    //recursive call
    reachHome(src, dest);
}
int main()
{
    int src = 1;
    int dest = 10;

    cout<< endl;
    reachHome(src, dest);

    return 0;
}
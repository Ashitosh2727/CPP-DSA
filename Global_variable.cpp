#include<bits/stdc++.h>
using namespace std;

//Global variable
int score = 15;

void a(int& i)
{
    cout<< i << endl;
    cout<< score << " Inside a()"<< endl;
    // b(i);
}

void b(int& i)
{
    cout<< i << endl;
    cout<< score << " Inside Main b()"<< endl;
}
int main() 
{
    int i = 5;
    cout<< score << " Inside Main"<< endl;
    a(i);    
    b(i);
    return 0;
}
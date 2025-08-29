#include<bits/stdc++.h>
using namespace std;

void sayDigits(int n, string arr[])
{
    //base case
    if(n == 0)
       return ;
       
    int digits = n % 10;
    n = n / 10;

    sayDigits(n,arr);

    cout<< arr[digits] << " ";
}
int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cin>> n;

    sayDigits(n, arr);

    return 0;
}
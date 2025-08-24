#include<bits/stdc++.h>
using namespace std;

void update(int &n)
{
    n++;
}
int main()
{
    /*

    int i = 5;

    //Create a reference variable

    int& j = i;

    cout<< i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;
    */

    int n = 5;
    cout<< "Before : "<< n << endl;
    update(n);
    cout<< "After : "<< n << endl;

}
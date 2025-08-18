#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;

    cout<< a<< endl;

    //address of operator - &
    cout<< "Address of a is "<< &a << endl;

    int *ptr = &a;

    cout<< "Value is "<< *ptr<<endl;
    cout<< "Address is "<< ptr<<endl;

    double d = 3.14;
    double *p2 = &d;

    cout<< "Value is "<< *p2<<endl;
    cout<< "Address is "<< p2<<endl;

    cout<< "Size of integer is "<<sizeof(a) << endl;
    cout<< "Size of pointer is "<<sizeof(ptr) << endl;

    cout<< "Size of pointer is "<<sizeof(p2) << endl;



    return 0;
}
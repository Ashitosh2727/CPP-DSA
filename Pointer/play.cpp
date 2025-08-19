#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* int *p =  0;

    // cout<< *p << endl;

    int i = 5;
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
   */
    /*


     int num = 5;
     int a = num;

     a++;
     cout<< a<< endl;

     int *p = &num;
     cout<< "before : "<<num<<endl;
     (*p)++;
     cout<< "after : "<< num<<endl;

     //copy a pointer
     int *q = p;

     cout<< p << "-"<<q<<endl;
     cout<< *p << "-"<<*q<<endl;
        */

    // important concept pointer arithmetic
    int i = 3;
    int *t = &i;

    cout << (*t)++ << endl;
    //*t = *t + 1;
    cout << "befor t " << t << endl;
    t++;
    cout << "after t" << t << endl;

    return 0;
}
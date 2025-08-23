#include <bits/stdc++.h>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // kuch change hoga -> NO

    // *p = * p + 1;
    // kuch change hoga -> yes

    **p = **p + 1;
    // kuch change hoga -> yes

}
int main()
{
    int i = 5;

    int *p = &i;
    int **p1 = &p;
    /*

    cout<< "Everything is good"<< endl;

    cout<< "printing the p->"<< p<< endl;
    cout<< "address of p->"<< &p << endl;
    cout<< "printing the *p1->"<<*p1 << endl;

    cout<< i<< endl;
    cout<< *p << endl;
    cout<< **p1 << endl;

    cout<< i<< endl;
    cout<< p<< endl;
    cout<< *p1<< endl;

    cout<< &p<< endl;
    cout<< p1<< endl;
     */

    cout << endl
         << endl;
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p1 << endl;
    update(&p);
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p1 << endl;
}
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void fun()
    {
        cout<< "I am A" << endl;
    }
};

class B{
    public:
    void fun()
    {
        cout<< "I am B" << endl;
    }
};

class C : public A, public B{

};


int main()
{
    C obj1;
    // obj1.fun();
    
    obj1.A :: fun(); 
    obj1.B :: fun();
}
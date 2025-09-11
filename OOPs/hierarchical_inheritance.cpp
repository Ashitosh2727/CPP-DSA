#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    void func1(){
        cout<< "Inside function 1"<< endl;
    }
};

class B : public A{

    public:
    void func2(){
        cout<< "Inside function 2"<< endl;
    }
};

class C : public A{

    public:
    void func3(){
        cout<< "Inside function 3"<< endl;
    }
};
int main()
{
    A a;
    a.func1();

    cout<< endl;

    B b;
    b.func1();
    b.func2();

    cout<< endl;

    C c;
    c.func1();
    c.func3();

    return 0;
}
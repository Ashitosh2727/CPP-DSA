#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    void sayHello()
    {
        cout<< "Hello World" << endl;
    }

    void sayHello(string name){
        cout<< "Hello " << name << endl;
    };
};
int main()
{
    A obj1;
    obj1.sayHello();

    return 0;
}
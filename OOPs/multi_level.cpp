#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<< "Speaking" << endl;
    }

};

class Dog : public Animal{

};

class Germansheperd : public Dog{

};
int main()
{
    Germansheperd g;
    g.speak();

    return 0;
}
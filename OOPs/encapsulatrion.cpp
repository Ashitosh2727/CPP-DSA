#include<bits/stdc++.h>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int height;

        public:
            int getAge()
            {
                return this->age;
            }
};

int main()
{
    Student s;

    cout<< "All is well" << endl;

    return 0;
}
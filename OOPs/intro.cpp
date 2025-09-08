#include<bits/stdc++.h>
using namespace std;

class Hero
{
    // Properties or data Members
    // char name[100];
     private:
     int health;

     public:
     char *name;
     char level;
     static int timeToComplete;

     static int random()
     {
         return timeToComplete;
     }
     Hero()
     {
      cout<< " Simple Constructor Called "<< endl;
      name = new char[100];
     }

   //parametrized constructor
   Hero(int health, char level)
   {
      cout<< "Address is : "<< this<< endl;
      this->health = health;
      this->level = level;
   }

     // Members of function
     void print()
     {
         cout<< "Name: "<< this->name<< endl;
        cout<< "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
     }

     int getHealth()
     {
        return health;
     }

     char getLevel()
     {
        return level;
     }

     void setHealth(int h)
     {
        health = h;
     }

     void setLevel(char c)
     {
        level = c;
     }

     void setName(char name[])
     {
       strcpy(this->name, name);
     }
     ~Hero()
     {
       cout<< "Destructor is Called" << endl;
     }
};

int Hero :: timeToComplete = 5;
int main()
{
   cout<< Hero :: timeToComplete << endl;
   cout<< Hero :: random() << endl;



   //Static allocation
   // Hero h1;

   // Hero *h2 = new Hero;

   // Manually destructor called
   // delete h2;

   // cout<< endl;
   // Hero h1;
   // h1.setHealth(70);
   // h1.setLevel('D');
   // char name[9] = "Ashitosh";
   // h1.setName(name);
   
   // h1.print();

   // Use default copy constructor

   // cout<< endl;
   // Hero h2(h1);
   // Hero h2 = h1;
   // h2.print();
 
   // cout<< endl;

   // h1.name[3] = 'u';
   // h1.print();

   // cout<< endl;
   // h2.print();
 
   // h1 = h2;

   // h1.print();
   // h2.print();
   
   // Hero h1(70,'A');
   // h1.print();

   // //Copy Constructor
   // Hero h2(h1);
   // h2.print();
  















   // Hero h1(10);
   // cout<< "Adrress is : "<< &h1 << endl;
   /*
    // Object created statically
   cout<< "Hii" << endl;
   Hero h1;

   //dynamically 
   Hero *h = new Hero;

   */
  
   /*
      // Creation of object
    // Static allocation
    Hero h1;
   h1.setHealth(80);
   h1.setLevel('B');
   cout<< "Health is "<< h1.getHealth()<< endl;
   cout<< "Level is "<< h1.getLevel()<< endl;

    //Dynamic alocation
    Hero *h = new Hero;
    h->setHealth(70);
    h->setLevel('A');
    cout<< "Health is "<< (*h).getHealth()<< endl;
    cout<< "Level is "<< (*h).getLevel()<< endl;

    cout<< "Health is "<< h->getHealth()<< endl;
    cout<< "Level is "<< h->getLevel()<< endl;

   //  cout<< "Health is :"<< h1.getHealth() << endl; 

   //  //set health using setter
   //  h1.setHealth(70);
   //  h1.setLevel('A');

   // h1.health = 70;
   //  h1.level = 'A';
   //  cout<< "Health is : "<< h1.getHealth() << endl;
   //  cout<< "Level is : "<< h1.level << endl; 
    // cout<< "Size : "<< sizeof(h1)<< endl;
    return 0;
   */
    
}
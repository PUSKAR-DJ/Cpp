//Overriding in C++
#include<iostream>
using namespace std;
class Animal 
{
    public:
    void eat()
    {
        cout<<"I can eat!"<<endl;
    }
    void sleep()
    {
        cout<<"I can sleep!"<<endl;
    }
};

class Dog:public Animal
{
    public:
    void eat()
    {
        cout<<"I cannot eat"<<endl;
    }
    void sleep()
    {
        cout<<"I cannot sleep"<<endl;
    }
};

int main()
{
    Animal obj1;
    Dog obj2;
    obj1.eat();
    obj1.sleep();
    obj2.eat();
    obj2.sleep();
    return 0;
}
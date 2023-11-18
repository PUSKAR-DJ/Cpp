//Inheritance in C++
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
    void drink()
    {
        cout<<"I can drink!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark()
    {
        cout<<"I can bark!"<<endl;
    }
};
int main()
{
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    return 0;
}
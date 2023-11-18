//Member function
#include<iostream>
using namespace std;
class SNU;

class Btech
{
    public:
    void memberFunction(SNU &obj);
};

class SNU
{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    SNU()
    {
        private_variable=50;
        protected_variable=100;
    }
    friend void Btech::memberFunction(SNU &obj);
};

void Btech::memberFunction(SNU &obj)
{
    cout<<"The value of private variable is : "<<obj.private_variable<<endl;
    cout<<"The value of protected variable is : "<<obj.protected_variable<<endl;
}

int main()
{
    SNU obj1;
    Btech obj2;
    obj2.memberFunction(obj1);
    return 0;
}
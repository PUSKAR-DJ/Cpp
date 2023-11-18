//Global Function
#include<iostream>
using namespace std;
class student
{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    student()
    {
        private_variable=50;
        protected_variable=100;
    }
    friend void friendFunction(student&obj);//friend function declaration
};

void friendFunction(student & obj)//Friend function defination(Global)
{//to access the 'private' and 'protected' variables of class 'student'
    cout<<"The value of private variable is: "<<obj.private_variable<<endl;
    cout<<"The value of protected variable is: "<<obj.protected_variable<<endl;
}

int main()
{
    student abc;//object of the base class
    friendFunction(abc);
    return 0;
}
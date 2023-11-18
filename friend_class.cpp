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
    friend class Btech;//function declaration
};

class Btech//friend class defination
{
    public://It can access student class as a friend.
    void display(student&t)
    {
        cout<<"The value of private variable is: "<<t.private_variable<<endl;
        cout<<"The value of protected variable is: "<<t.protected_variable<<endl;
    }
};

int main()
{
    student abc;
    Btech dbms;
    dbms.display(abc);
    return 0;
}
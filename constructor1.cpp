//constructor in cpp
#include<iostream>
using namespace std;
class student
{
    char name[50];
    int roll;
    double fee;
    public:
    student();
    void display();
};
student::student()
{
    cout<<"Enter your roll no: ";
    cin>>roll;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your fee amount: ";
    cin>>fee;
}
void student::display()
{
    cout<<endl<<roll<<"\t"<<name<<"\t"<<fee;
}
int main()
{
    student s;
    s.display();
    return 0;
}
//Variables declared within a class are called attributes.
#include<iostream>
using namespace std;
class myclass
{
    public:
    int myid;
    int marks;
    string name;
};

int main()
{
    myclass obj;
    obj.myid=200;
    obj.marks=70.5;
    obj.name="Aec sen";
    cout<<obj.myid<<endl;
    cout<<obj.marks<<endl;
    cout<<obj.name<<endl;
    return 0;
}
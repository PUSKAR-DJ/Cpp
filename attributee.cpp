//Class with five attributes
#include<iostream>
using namespace std;
class SNU
{
    public:
    int enroll_no; //attributes
    int reg_no;
    float marks;
    char grade;
    string name;
};

int main() //derive code
{
    SNU std; //creating the object
    std.enroll_no=123654; //access the attribute and set values
    std.reg_no=125463;
    std.marks=70.3;
    std.grade='A';
    std.name="Puskar";

    cout<<std.enroll_no<<endl;
    cout<<std.reg_no<<endl;
    cout<<std.marks<<endl;
    cout<<std.grade<<endl;
    cout<<std.name<<endl;
    return 0;
}
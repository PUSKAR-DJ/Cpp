//Assigning values to the variables
#include<iostream>
class myclass
{
    public:
    int a;
    int b;
};
int main()
{
    myclass myobj;//class object creatiion
    myobj.a=5;
    myobj.b=6;
    std::cout<<myobj.a<<myobj.b;
    return 0;
}
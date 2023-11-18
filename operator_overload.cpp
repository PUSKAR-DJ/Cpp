//Operator Overloading::Class Function
#include<iostream>
using namespace std;
class complex//base class
{
    private:
    int real,imag;
    public:
    complex(int r=0,int i=0)
    {
        real=r; 
        imag=i;
    }//Automatically uses '+' operator to add class objects
    complex operator + (complex const&objs)
    {
        complex res; 
        res.real=real+objs.real;
        res.imag=imag+objs.imag;
        return res;
    }
    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex c1(10,2),c2(5,7);//assign the parameters in object variable
    complex c3=c2+c1;
    c3.print();
    return 0;
}

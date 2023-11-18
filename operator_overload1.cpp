//Operator overloading::Friend Function
#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag; 
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    friend complex operator + (complex const&c1,complex const&c2);
};//Global friend operator can access all private members of the base class.

complex operator+(complex const&c1,complex const&c2)
{
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}
int main()
{
    complex c1(0,2),c2(5,7);
    complex c3=c1+c2;
    c3.print();
    return 0;
}
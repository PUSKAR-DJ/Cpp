//Inherit the property from the base class.
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    void clutch()
    {
        cout<<"Clutch can be used to change gear"<<endl;
    }
    void brakes()
    {
        cout<<"Brakes caan be used to stop"<<endl;
    }
    void accelerator()
    {
        cout<<"Acclerator can be used to increase speed"<<endl;
    }
};

class Tesla:public Vehicle
{
    public:
    void Auto_pilot()
    {
        cout<<"Auto-Polot can self drive"<<endl;
    }
};
int main()
{
    Tesla elon;
    elon.clutch();
    elon.brakes();
    elon.accelerator();
    elon.Auto_pilot();
    return 0;
}
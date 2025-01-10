# include <iostream>
using namespace std;
class vehicle
{
    public:virtual void sound()=0;
};
class Train : puclic vehicle
{
    public:void sound()
    {
        cout<<"\n  chukchukchk \n";
    }
};
class car:public vehicle
{
    public :void sound()
    {
        cout<<"\n"
    }
}
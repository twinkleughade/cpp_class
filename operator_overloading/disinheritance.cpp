#include <iostream>
using namespace std;
class Company
{
    public:virtual void empinfo() final
    {
        cout <<"total employee 200000\n";
    };
};
class Bhopalbranch:public Company
{
    public:void empinfo()
    {
        cout<<"total employee 30000\n";
    }
};
int main()
{
    Bhopalbranch p;
    p.empinfo();
}
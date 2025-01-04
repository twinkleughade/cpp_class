//poly-many , morphism-forms
//2 types - 1. compile time(early binding)  ex. function overloading , operator overloading, normal object create, multiple function
//          2. run time(late binding)       ex. function overriding,  virtual function,& pure virtual function, super class, abstract class,
//                                              2 object->  1.pointer object &  2. normal object
# include <iostream>
using namespace std;
class RBI
{
    public:virtual void loan()
    {
        cout<<"\n RBI class \n";
    }
    virtual void show()
    {
        cout<<"\n RBI bank\n";
    }
};
class AXIS:public RBI{
    public:void loan()
    {
        cout<<"\n Axis class \n";
    }
    void show()
    {
        cout<<"\n Axis bank \n";
    }
};
class SBI:public RBI
{
    public:void loan()
    {
        cout<<"SBI class\n";
    }
};
int main()
{
    RBI *p;
    AXIS a;
    SBI s;
    p=&a;
    p->loan();
    p->show();
}
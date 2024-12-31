# include <iostream>
using namespace std;
class RBI{
    int t;
    public:void display()
    {
        cout<<"\n RBI Class \n";
    }
};
class SBI:public RBI
{
    int a;
    public:void show()
    {
        cout<<"\n SBI Class \n";
    }
};
class CUSTOMER:public SBI
{
    int a;
    public:void acnt()
    {
        cout<<"\n customer class \n";
    }
};
int main()
{
    CUSTOMER s;
    s.display();
    s.show();
    s.acnt();
}
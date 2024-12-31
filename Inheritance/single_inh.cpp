# include <iostream>
using namespace std;
class RBI{
    int t;
    public:RBI()
    {
        cout<<"\n Rbi memory\n";
    }
    ~RBI()
    {
        cout<<"\n RBI memory released \n";
    }
    public:void show()
    {
        cout<<"\n RBI Class\n";
    }
};
class SBI:public RBI
{
    int a;
    public:SBI()
    {
        cout<<"\n sbi memory \n";
    }
    ~SBI()
    {
        cout<<"\n sbi memory released \n";
    }
    public:void show()
    {
        cout<<"\n SBI class \n";
    }
};
int main()
{
SBI s;
s.show();
cout<<"size of sbi="<<sizeof(s);
}
 


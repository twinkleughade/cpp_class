//in a parametarized constructor we use parameter in a function
# include <iostream>
using namespace std;
class ATM
{
    public:ATM(int u, int p)
    {
        if(u==111 && p==2024)
        {
            cout<<"\n welcome \n";
        }
        else{
            cout<<"invalid user\n";
        }
    }
};
int main()
{
    int acno,pwd;
    cout<<"enter account number\n";
    cin>>acno;
    cout<<"enter your password\n";
    cin>>pwd;
    ATM obj(acno,pwd);
}
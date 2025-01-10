# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first nubmer\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;
    try{
        if(b<=0)
        {
            throw b;
        }
        cout<<a/b;
    }
    catch(int b)
    {
        cout<<"denometer can not be zero\n";
    }
    cout<<"\n done\n";

}

// write a progrma to make function overloading in a class
//overloading = same function different parameters again and again
# include <iostream>
using namespace std;
class top1
{
    int a=10,b=90;
    public:void sum()   //function oc=verloading
    {
        cout<<a+b<<"\n";
    }
    void sum(int k, int p, int l) //function overloading
    {
        cout<<k+p+l<<"\n";
    }
};
int main()
{
    top1 f;
    f.sum();
    f.sum(2,3,4);
}

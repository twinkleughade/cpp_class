# include <iostream>
using namespace std;
class top1
{
    int a=10,b=20;
    public:int sum() //declare and defined inside the class
    {
        return a+b;
    }
};
class top2
{
    int a=10,b=20;
    public:int sum();
};
int top2::sum() // function declare inside a class but defined outside the class 
{
    return a+b;
}
int main()
{
    top1 pk;
    cout<<pk.sum();
    top2 t2;
    cout<<t2.sum();
}

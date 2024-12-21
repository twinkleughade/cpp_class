// class name and function name will same same it is constructor
// it has no return type
//constructor implicit calling, we dont need to call it
// class top:
// {
//     public:top()
//     {
//         cout<<" "<<"\n";(statement)
//     }
// }

# include <iostream>
using namespace std;
class top
{
    public:top() //implicit calling 
    {
        cout<<"cybrom";
    }
public:void show()  //explicit calling
{
    cout<<"\nhello";
}
};
int main()
{
    top t1;
}

// ----------------------------- static function -----------------------------------------------
# include <iostream>
using namespace std;
class top
{
    static int a;
    static int b;
    public:static void sum()
    {
        cout<<a+b;
    }
};
// int top::a=3;
int top::a;
// int top::b=4;
int top::b;
int main()
{
top::sum();
}
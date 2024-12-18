// -------------------------   single class -----------------------------------
// # include <iostream>
// using namespace std;
// class top
// {
//     int a=10;
//     int b=20;
//     public:void show()
//     {
//         cout<<a+b<<"\n";
//     }
// };
// int main()
// {
//     top t;
//     t.show();
// }

// --------------------------- multi class ------------------------------------
// # include <iostream>
// using namespace std;
// class top
// {
//     int a=10;
//     int b=20;
//     public:void show()
//     {
//         cout<<a+b<<"\n";
//     }
// };
// class top2
// {
//     int a=10;
//     int b=20;
//     public:void multi()
//     {
//        cout<<a+b<<"\n"; 
//     }
// };
// int main()
// {
//     top t;
//     t.show();
//     top2 t2;
//     t2.multi();
// }

// ------------------anonymous class --------------------------
// # include <iostream>
// using namespace std;
// class 
// {
//     int a=10;
//     int b=20;
//     public:void show()
//     {
//         cout<<a+b<<"\n";
//     }
// }p;
// int main()
// {
//     p.show();
// }

// --------------------  composite class -----------------------------

# include <iostream>
using namespace std;
class Virus 
{
    public:void affect()
    {
        cout<<"ur system got hacked\n";
    }
};
class Reward 
{
    Virus v;
    public:void prize()
    {
        cout<<"u won $2.0000\n";
        v.affect();
    }
};
int main()
{
    Reward r;
    r.prize();
}
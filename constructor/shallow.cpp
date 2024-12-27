// # include <iostream>
// using namespace std;
// class student
// {
//     public:int r;
//     public:student(int rno)
//     {
//         r=rno;
//     }
//     void show()
//     {
//         cout<<"Rno="<<r;
//     }
// };
// int main()
// {
//     student s1(101);
//     s1.show();
//     student s2(s1);
//     s2.show();
// }



// other example
# include <iostream>
using namespace std;
# include <string.h>
class student
{
    char *c;
    public:student(char *s)
    {
        c=new char[20];
        strcpy(c,s);
    }
    void show()
    {
        cout<<"\n Name="<<c<<"\n";
    }
    void surname(char *s)
    {
        strcat(c,s);
    }
};
int main()
{
    student s1("sumit");
    s1.show();
    student s2(s1);  //calling shallow copy
    student s2=s1;  //implicit assignment copy constructor 
    s2.show();
    // s2.surname("verma");
    s1.show();
    s2.show();
}
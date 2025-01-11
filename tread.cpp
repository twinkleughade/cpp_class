# include <iostream>
using namespace std;
# include<thread>
void even(int start, int end)
{
    for(int i=start; i<=end; i++)
    {
        if(i%2==0)
        {
            cout<<"even no ="<<i<<"\t";
        }
    }
}
void odd(int start, int ends)
{
    for (int i=start; i<=ends; i++)
    {
        if(i%2!=0)
        {
            cout<<"odd no =" <<i<<"\t";
        }
    }
}
int main()
{
    thread t1(even,1,100);
    thread t2(odd,1,100);
    t1.join();
    t2.join();
    cout<<"\n Finished \n";
}
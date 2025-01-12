#include<iostream>
using namespace std;
class top{
    static int a;
    static int b;
    public: static void sum(){
        cout<<a+b;
    }
};
int top::a=100;
int top::b=400;

int main(){
    top::sum();

}
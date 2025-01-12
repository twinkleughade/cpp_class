#include<iostream>
using namespace std;
class bhopal{
    int miles;
    public:
    bhopal(int m){
        miles=m;
    }
    int operator -(bhopal &obj){
        miles=obj.miles - miles;
        cout<<"distance btw two cities is "<<miles<<"\n";
    }
    
};
int main(){
    bhopal start(12000);
    bhopal end(12180);
    start -(end);
}
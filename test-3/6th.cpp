#include <iostream>
#include<string.h>
using namespace std;
class student{
    char *c;
    public:
    student( const char *s){
        c=new char[20];
        strcpy(c,s);
    }
    student (student &obj){
        c=new char[20];
        strcpy(c,obj.c);
    }
    void show(){
        cout<<"\n name is "<<c;
    }
    void surname( const char *s){
        strcat(c,s);
    }
    ~student(){
        delete c; // destructor , deleting the memory allocated by us in Heap 
    }
};
int main(){
    student s1("manya");
    s1.show();
    student s2(s1);//->calling shallow copy
    // student s2=s1; implicit assignment copy constructor 
    s2.show();
    s2.surname("sharma");
    s2.show();
    s1.show();

}
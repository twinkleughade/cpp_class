# include <iostream>
using namespace std;
int main(){
    int b;
    cout<<"enter number number either 1,2,3\n";
    cin>>b;

    try{
        if(b==1)
        {
            throw 'a';
        }
        else if (b==2)
        {
            throw 34.56;
        }
        else if(b==3)
        {
            throw 3;
        }
        cout <<"welcome\n";
    }
    catch(int n)
    {
        cout<<"\n integer value\n";
    }
    catch (char n)
    {
        cout<<"\n float value\n";
    }
    cout<<"\n finished \n";
}
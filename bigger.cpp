#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b)
        {
            if(a>c)
            cout<<"A is Greatest"<<endl;
        }
    else if(c>b)
        {
            cout<<"c is greatest"<<endl;
        }
    else {
    cout<<"b is greatest";
    }
    



    return 0;
}
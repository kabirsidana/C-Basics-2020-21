#include<iostream>
using namespace std;
int main()
{   
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"positive "<<endl;
    }
    else if (a==0)
    {
        cout<<"zero is neither positive nor negitive"<<endl;
    }
    else
    cout<<"negitive"<<endl;



    return 0;
}
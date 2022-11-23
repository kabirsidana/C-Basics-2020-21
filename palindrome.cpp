#include <iostream>
using namespace std;
int main()
{
    int a,b=0,original=0,;
    cout<<"enter"<<endl;
    cin>>a;
    original = a ;
    while (a>0)
    {
       b=(b*10)+a%10;
        a=a/10;
    }
    
    cout<<b;
   if (b==original)
    {cout<<"    PALINDROME NUMBER "<<endl;}
    else
    {cout<<"     NOT PALINDROME"<<endl;}
    return 0;
}
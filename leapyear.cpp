#include<iostream>
using namespace std;
int main()
{
    int year,c;
    cout<<"enter the year "<<endl;
    cin>>year;
    //when leap year is devided ny 4 the remainder is zero
    c=year%4;
    if(c==0)
{cout<<"YES this is a leap year"<<endl;}
   else
   {
       cout<<"NO this is not a leap year"<<endl;
   }

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    //with single variable
    int year;
    cout<<"enter the year "<<endl;
    cin>>year;
    //when leap year is devided ny 4 the remainder is zero
    
    if((year%4)==0)
{cout<<"YES this is a leap year"<<endl;}
   else
   {
       cout<<"NO this is not a leap year"<<endl;
   }

    return 0;
}`
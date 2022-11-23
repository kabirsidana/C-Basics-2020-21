//swap 2 values without 3rd integer
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER VALUE OF A AND B"<<endl;
    cin>>a>>b;  // a=12 b=8
    a=a+b;      //a=20
    b=a-b;      //b= 20-8, b = 12 
    a=a-b;      // a= 20 - 12 , a=8
    cout<<"the value of a is  "<<a<<endl;
    cout<<"the value of b is  "<<b<<endl;
    
return 0;
}
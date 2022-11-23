#include <iostream>
using namespace std;
int main()
{   int a,b
;
  cout<<"enter"<<endl;
  cin>>a;
  b=a%10;
 while(a>10)
{
   a=a/10;  
} 
    cout<<a+b;
   
return 0;
}
// find the factorial of number (ex 5 = 5*4*3*2*1= )
#include <iostream>
using namespace std;
int main()
{
    int n,fact;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    fact=1;
    if(n<0)
   
        cout<<"cant find factors"<<endl;
        else if (n==0)
        {cout<<"the factorial of zero is always  -> 1"<<endl;}
    
    for(;n>=1;n=n-1){
    {
        fact=fact*n;
    }
   
    cout<<"the factorial is  ->   "<<fact;
    }


    return 0;
}

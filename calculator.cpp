#include <iostream>
using namespace std;
int main()
{ 
    int a,b,ans;
    char c;
    cout<<"Enter Both Values"<<endl;
    cin>>a>>b;
    cout<<"Enter Your Operator "<<endl;
    cin>>c;

    switch (c)
    {
    case '+' :
    ans=a + b;
    cout<<ans;
    break;


    case '-' :
    ans=a-b;
    cout<<ans<<endl;
        break;


    case '*':
    ans = a * b;
    cout<<ans;
    break;


    case '/' :
    ans=a/b;
    cout<<ans<<endl;
    break;
    
    default :
    cout<<"INVALID ENTRY";
    break;

    
       
    
    
    
    }




    return 0;
}
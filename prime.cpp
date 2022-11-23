#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER NO.";
    cin>>a;
    int b;
   
    for(int b=2;b<a;b++)
    {
        if(a%b==0)
        {
          cout<<"non prime";
          break;  
        }
   

    else
    {
        cout<<"prime"<<endl;
        break;
    }
    }         
    


    return 0;
}
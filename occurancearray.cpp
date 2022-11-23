#include <iostream>
using namespace std;
int main()

{     
    int a;
    cout<<"Enter your number"<<endl;
    cin>>a;
    int c=0;
    int marks[15]={2,334,3,45,34,2,3,3,3,3,3,3,3,3,3};
    for(int i=0;i<15;i++)
    {
        if(marks[i]==a)
       { c++;}
       
       
    }
    if (c==0)
    {cout<<"no occurance"<<endl;}
    else
    cout<<"number of times "<<a<<" occured is "<<c;


    return 0;
}
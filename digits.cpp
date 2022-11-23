#include <iostream>
using namespace std;
int main()
{   int a,count=0;
    cout<<"enter number"<<endl;
    cin>>a;
    while (a>0)
    {
        count++;
        a=a/10;
    }
    cout<<count;

    return 0;
}   
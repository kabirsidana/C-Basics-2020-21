#include <iostream>
using namespace std;
inline int sum(int a,int b){
   int c=a+b;
    return c;
}
int main()
{
    int x,y;

    cout<<"enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number "<<endl;
    cin>>y;
    cout<<sum(x,y);

    return 0;
}
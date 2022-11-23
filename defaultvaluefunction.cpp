#include <iostream>
using namespace std;
int funds(int currentmoney,float intrest=1.4)
{
    return(currentmoney*intrest);
}
int main()
{   
    int money;
    cout<<"Enter The current Money -:"<<endl;
    cin>>money;
    cout<<"After One Year "<<money<<"will be -:"<<funds(money)<<endl;
    cout<<"After One Year "<<money<<"will be -:"<<funds(money,1.9)<<endl;
    //this is default we do not have to enter second value because it is fixedin functon
    //we can also change values
    
    return 0;
}
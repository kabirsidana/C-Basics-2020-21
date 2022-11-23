#include <iostream>
using namespace std;
int main()
{   int x,a,count=0; 
    cout<<"Enter Your Number Here -:"<<endl;
    cin>>x;
    int age[]={12,3,445,56,69,56,4,334,5,6,54,45,76,65,23,434,56,34,999};
    //a=age[0];
    for(int i=0;i<19;i++)
    {
        if(age[i]==x)
        {
            count++;
        }
    }
    if(count>=1)
    {
         cout<<"Yes this value is present in the array   ";
    }
    else 
    cout<<"not present";



    return 0;
}
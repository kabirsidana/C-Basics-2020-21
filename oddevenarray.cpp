//count the odd even no. in array
#include <iostream>
using namespace std;
int main()
{   int a,evencount,oddcount;
evencount=0;
oddcount=0;

    int age[]={4,56,57,6,43,3,45,56,43,43,34,34,2,432,42,43,324,32,4323,456,353,365,56};
    for(int i=0;i<23;i++)
    {
        a=age[i]%2;

        if(a==0)
        evencount++;
        
        if (a!=0)
        oddcount++;
        
    }
    cout<<"the number of even numbers are -: "<<evencount<<endl;
    cout<<"the number of odd numbers are -: "<<oddcount;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{   
    int marks[]={45,67,87,34,67,100,506,34,45,65};
    int max        =marks[0];
    for(int i=1;i<10;i++)
    {
    
        if(max<marks[i])
        max=marks[i];
    }
    cout<<max;






    return 0;
}
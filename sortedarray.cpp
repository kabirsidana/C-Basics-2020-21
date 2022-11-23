// Sorting array Ascending order
#include <iostream>
using namespace std;
int main()
{
    int a[5]={4,3,2,5,1};
    int i,j,cn,temp,x;  //cn - current number
    for(i=0;i<4;i=i+1)
    cn=i;
    {
        for(j=i+1;j<5;j=j+1){
            if(a[cn]>a[j])
            {
                cn=j;
                 temp = a[i];
                a[i] = a[cn];
                a[cn] = temp;

            }
        }
    }
    for(x=0;x<5;x++)
    {
        cout<<a[x];
    }
    
    return 0;
}
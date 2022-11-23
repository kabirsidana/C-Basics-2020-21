#include <iostream>
using namespace std;        // 0,1,1,2,3,5,8,13,21
int main()
{   
    int first=0,second=1,next=1 ;
    // for(int i=1;i<10;i++)
    while(next<100)
    {
        
        next = first + second;
        first = second;
        second = next;
        cout<<next<<endl;


    }
    
    

    return 0;
}
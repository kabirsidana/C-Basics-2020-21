#include<iostream>
using namespace std;
int main()

{   
    int age[9]={25,43,3,2,3,28,23,222,1};
    int min;
    min=age[0];
    for (int i=1;i<9;i=i+1)
    {
        if(min>age[i])
            min=age[i];
    
    }
    cout<<min;

    return 0;
}
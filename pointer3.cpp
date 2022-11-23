#include <iostream>
using namespace std;
int main()
{
    //float a; //it cant store value of another data
    int a;
    a=69;
    int* b=&a;
    //b=b+1;//address will be incremented and connection wil collapse
    cout<<*b;


    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=9;
    int temp;
    //if we do a=b and b=a both will became 9 (wrong)
    //so we have to take third variable or temprary variable
    temp=a;
    a=b;
    b=temp;
     
     cout<<"the value of a is  -:"<<a<<endl<<"the value of b is -:"<<b<<endl;


    return 0;
}
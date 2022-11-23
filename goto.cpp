#include <iostream>
using namespace std;
int main()
{
    cout<<"A"<<endl;
    goto a;             // we have to make a variable of goto
    cout<<"B"<<endl;
    cout<<"C"<<endl;     // it will jump to where you want it will not print
    a:                      // the values between
    cout<<"D"<<endl;

    return 0;
}
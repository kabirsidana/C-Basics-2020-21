// Default Constructor -- No argument is passed
#include <iostream>
using namespace std;
class abc
{
    int a, b;

public:
    abc()
    {
        a = 50;
        b = 19;
    }
    int sum()
    {
    cout<<"the mf sum is "<<a+b;
    }
};
int main()
{
    abc ob;
    ob.sum();

    return 0;
}
#include <iostream>
using namespace std;
class xyz
{
    public:
    int a,b;
    void sum()
    {
        cout<<"the sum is "<<a+b;

    }
};
int main()
{
    xyz ob1;
    ob1.a=10;
    ob1.b=59;
    ob1.sum();



    return 0;
}
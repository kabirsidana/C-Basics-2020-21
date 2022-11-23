//Parameterized constructor --Argument is passed
#include <iostream>
using namespace std;
class abc 
{
    int a,b;
    public:
    abc(int m, int n)
    {
        a=m;
        b=n;
    }
    void display()
    {
        cout<<"the value of a is    "<<a<<endl;
        cout<<"the value of b is    "<<b;

    }
};
int main()
{
    abc obj(10,23);
    obj.display();




    return 0;
}
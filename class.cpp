#include <iostream>
using namespace std;
class abc
    {
    public:
    int a;
    
void display()
    {
        cout<<"the value is "<<a;
    }
    };
int main()
{
    abc object1;
    object1.a=10;
    object1.display();
    return 0;
 }
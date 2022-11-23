#include <iostream>
using namespace std;
class abc
{
public:
    int a, b;
    
    set(int a, int b)
    

    int display()
    {
        cout << "the sum is " << a + b;
    }
};
int main()
{
    abc x;
    x.set(12, 12);
    
    x.display();

    return 0;
}
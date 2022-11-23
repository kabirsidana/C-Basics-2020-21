#include <iostream>
using namespace std;
class abc
{
    int a, b;

public:
    void set_data()
    {
        cout << "Enter the values " << endl;
        cin >> a >> b;
    }
    void sum()
    {
        cout << "The sum of the values are " << a + b;
    } 
};
int main()
{ 
    abc ob;
    abc *ptr = &ob;
   // (*ptr).set_data();
    //(*ptr).sum();
    ptr->set_data();1
    ptr->sum();

return 0;
}
#include <iostream>
using namespace std;
int count=0;        //global variable
class abc
{
    public:
    abc()
    {
        count++;
        cout<<"Item Constructed   "<<count<<endl;
    }
    ~abc()
    {
        count--;
        cout<<"Item Destroyed     "<<count<<endl;
    }
};
int main()
{
    abc aa;
    abc bb;
    // {
        // abc cc;
    // }

    
    return 0;
}
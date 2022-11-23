#include <iostream>
using namespace std;
class employee
{
    int a;
public:
    void inputid()
    {
        
        cout<<"Enter employee id  "<<endl;
        cin>>a;
    }
    void display(){
        cout<<"the emplyee id is  "<<a<<endl;
    }
};
int main()
{
    employee kabir,rohan;
    kabir.inputid();
    kabir.display();
    rohan.inputid();
    rohan.display();
    return 0;
}
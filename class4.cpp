#include <iostream>
using namespace std;
class employee
{
    int salary;
    int id;
    public:
    void SetId()
    {
        cout<<"enter your ID"<<endl;
        cin>>id;
    }
    void displayId()
    {
        cout<<"The id of the employee is ->"<<id<<endl;
    }
};
    int main()
    {
        employee kabir, lovish,rohan;
        kabir.SetId();
        kabir.displayId();
        //kabir.id; //not correct




        return 0;
    }
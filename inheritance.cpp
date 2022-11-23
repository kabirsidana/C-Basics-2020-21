#include<iostream>
using namespace std;
class abc
{
    public:
    int id, salary;
    abc()
    {
        id=123;
        salary=6969;
    }

    display()
    {
        cout<<"the salary of ID   "<<id<<"  is  "<<salary<<"$"<<endl;
    }
};
//syntax - class {{derived class name }} : {{visiblity mode }}  {{base class name}}
    class xyz : public abc{
       public:
       int marks;
       xyz()
       {
           marks =33;
        
       }
        data()
        {
            cout<<marks;
            
        }
    };
int main()

{   abc ob;
 xyz op;
 //op.display(); // using abc function with xyz object 
 op.id=10; // using abc class 
 op.display();
    return 0;
}
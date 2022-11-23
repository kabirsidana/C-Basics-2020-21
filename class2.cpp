//how to access function outside the class
#include <iostream>
using namespace std;
class abc
{   private:
    int c;
    public:
    int a,b;
    void display();
};
 void abc::display()
    {
        cout<<"the value of a is "<<a<<endl;
    }
int main()
{   
    abc obj;
    obj.a=12;
    //obj.c=12; //cant access this because this is private
    
    obj.display();


    return 0;
}
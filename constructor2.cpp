#include <iostream>
using namespace std;
class boat
{
    int a;
    public:
    boat()
    {
        a=69;
    }
    boat(boat &b)
    {
        a=b.a;
    }
   void display()
    {
        cout<<"The value of A is  "<<a<<endl;
    }
};
int main()
{
    boat obj;
    obj.display();
    boat abc(obj);
    abc.display();
    boat xyz=abc; // or xyz=abc;
    xyz.display();


    return 0;
}
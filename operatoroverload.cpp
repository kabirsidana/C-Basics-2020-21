#include <iostream> 
using namespace std;
class complex
{
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    //complex is return type 
    complex operator+(complex c){
        complex temp;
        temp.a=a+c.a; //c1.add(c2) works on this concept
        temp.b=b+c.b;
        return temp;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex ob1(1,2),ob2(3,4);

    complex ob3;
    ob3=ob1+ob2;
    ob3.display();

    return 0; 
}
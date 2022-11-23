#include<iostream>
using namespace std;
class abc{
    int a;
    public:
    int b;
     setdata(){
        a=36;
        b=33;
    }
    int getdata() //it helps to use int a which is private varaible and it cannot be inherited so we need a method
    {
        return a;
        
    }
   
};
class xyz : public abc{
    int c;
    public:
        
    process(){
        c=b+getdata();
    }
    display(){
        cout<<"the value of A "<<getdata()<<endl;
         cout<<"the value of b "<<b<<endl;
     cout<<"the value of c "<<c<<endl;
    }
};
int main()
{
    xyz ob;
    ob.setdata();
    ob.process();
    ob.display();
    return 0;
}
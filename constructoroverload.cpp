#include<iostream>
using namespace std;
class abc
{ 
    int a;
public:
    abc ()
    {
        a=10;
    }
    abc (int x)
    {
        a=x+1;
    }
    abc ( abc &b)
    {
        a=b.a+2;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
    }

    
};
    int  main()
    {
        abc ob;
       ob.display();

        abc ob1(10);
        ob1.display();

        //abc ob2(ob);
        abc ob2=ob;
        ob2.display();

    





        return 0;
    }
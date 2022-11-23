#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
     void input()
    {
        cout<<"Enter both number "<<endl;
        cin>>a>>b;
    }
    void output(){
        cout<<"the sum is "<<a+b;
    }
};
class xyz : public abc{
    int x,y;
    public:
     void input(){
    cout<<"Enter one number"<<endl;
    cin>>x;
    }
    void output()
    {
        cout<<"the number is "<<x<<endl;

    }
};
int main ()
{   
    abc * objptr; // pointer of base class
    abc ob1;      // object of base class
    xyz * objptr2; //pointer of derived class
    xyz ob2;       // object of derived class
    objptr = &ob2;  //base class pointer pointing to derived class object
    objptr->input();    // calling with pointed derived class object
    objptr->output();     // but it will only point to derived
                        // it will not run display base class function
    return 0;

}
//sum of time with object passing 
#include <iostream>
using namespace std;
class time
{
    int hour , min ;
    public:
    void getdata()
    {
        cout<<"input hours and minutes"<<endl;
        cin>>hour>>min;
    }
    void display()
    {
        cout<<"the time is-->    "<<hour<<":"<<min<<endl;
    }
    void sum(time f1,time f2)
    {
        hour=(f1.min +f2.min)/60; 
        min=(f1.min +f2.min)%60;
        hour=hour+f1.hour+f2.hour;      
    }

};
int main()
{
    time f1,f2,f3;
    f1.getdata();
    f2.getdata();
    f3.sum(f1,f2);
    f3.display();
    return 0;

}
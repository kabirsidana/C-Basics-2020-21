#include <iostream>
using namespace std;
class abc
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter the data" << endl;
        cin >> a;
    }
    int sum(abc aa,abc bb)
    {
        int x;
        x=aa.a+bb.a;
        cout<<x;

    }
    // void display()
    // {
    //     cout << "The sum is " << c;
    // }
};
int main()
{
  abc ob1, ob2,ob3;

  ob1.getdata();
  ob2.getdata();
  ob3.sum(ob1,ob2);

    
    return 0;
}
#include <iostream>
using namespace std;
class abc
{
    int a, b;

public:
//it will not run without & symbol because we have to pass address to perform it 
    void getdata(abc &cc)
    {
        cout << "enter the data" << endl;
        cin >> cc.a;
    }
//similarly we will act on addresses not values
    void  sum(abc &aa,abc &bb)
    {
        int x;
        x=aa.a+bb.a;
        cout<<x;

    }

};
int main()
{
  abc ob1, ob2,ob;

  ob.getdata(ob1);
  ob.getdata(ob2);
  ob.sum(ob1,ob2);

    
    return 0;
}
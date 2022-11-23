#include <iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void input()
    {
        cout<<"input the values "<<endl;
        cin>>a;
    }
    friend int sum(abc);

  
};
    int sum(abc ob )
    {
       ob.b= (ob.a)*(ob.a);
    }

int main()
{
    abc ob;
    ob.input();
   cout<<"the square is " <<sum(ob);
    return 0;
}
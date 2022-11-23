#include <iostream>
using namespace std;
class b;
class a
{
    int x;
public:
    input()
    {
        cout << "Enter Value OF X" << endl;
        cin >> x;
    }
    friend max(a, b);
};
class b
{
 int y;
public:
    input1()
    {
        cout << "Enter The value of Y" << endl;
        cin >> y;
    }
    friend max(a, b);
};
int max(a ob,b ob1)

{
   if(ob.x>ob1.y)
   {
       cout<<"A wins"<<endl;
   }
   else
   {
       cout<<"B wins "<<endl;
   }
}
int main()
{
    a ob;
    b ob1;
    ob.input();
    ob1.input1();

    cout<<"the Result is  -->"<<max(ob,ob1);

    return 0;
}

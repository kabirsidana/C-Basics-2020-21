// make 2 calculator and merge them with the help of inheritance
#include <iostream>
using namespace std;
class cal01
{
protected:
    char c;
    int a, b;

public:
    void input()
    {
        // a=aa;
        // b=bb;
        // c=cc;
        cout << "enter both values " << endl;
        cin >> a >> b;
        cout << "Choose OPerator +,-" << endl;
        cin >> c;
    }

    void result()
    {
        switch (c)
        {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        default:
            cout << "wrong inputs" << endl;
            break;
        }
    }
};
class cal02
{
    int x, y;
    char z;

public:
    void input2()
    {
        cout << "enter both values " << endl;
        cin >> x >> y;
        cout << "Choose OPerator (*,/) " << endl;
        cin >> z;
    }

    void result2()
    {
        switch (z)
        {
        case '*':
            cout << x * y;
            break;

        case '/':
            cout << x / y;
            break;

        default:
            cout << "Wrong Inputs" << endl;
            break;
        }
    }
};
class derived : public cal01, public cal02
{
public:
    void cal1()
    {
        input();
    }
    void display1()
    {
        result();
    }
    void cal2()
    {
        input2();
    }
    void display2()
    {
        result2();
    }
};
int main()
{
    derived obj;

   // obj.cal1();
   // obj.display1();
    obj.cal2();
    obj.display2();

    return 0;
}
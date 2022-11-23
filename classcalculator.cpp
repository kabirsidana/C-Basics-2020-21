#include <iostream>
using namespace std;
class calculator
{
    int a, b, r;
    char c;

public:
    void input_value()
    {
        cout << "ENTER BOTH NUMBERS" << endl;
        cin >> a >> b;
    }
    void input_operator()
    {
        cout << "CHOOSE OPERATOR +,-,*,/,%" << endl;
        cin >> c;
    }
    void process()
    {
        switch (c)
        {
        case '+':
            r= a + b;
            //cout<<r;
            break;
        case '-':
            r=a - b;
             //cout<<r;
            break;
        case '*':
            r= a * b;
             //cout<<r;
            break;
        case '/':
            r =a / b;
            // cout<<r;
            break;
        case '%':
            r= a % b;
            // cout<<r;
            break;

        default:
        cout<<"WRONG INPUTS"<<endl;
            break;
        }
    }
        void display()
        {
            cout<<" THE RESULT IS  " <<r;
        }
};
int main()
{   
    calculator obj;
    obj.input_value();
    obj.input_operator();
    obj.process();
    obj.display();


    return 0;
}

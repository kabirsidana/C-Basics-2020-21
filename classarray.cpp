#include <iostream>
using namespace std;
class employee
{
    int salary;
    int id;

public:
    SetId()
    {
        cout << "enter your ID" << endl;
        cin >> id;
    }
    displayId()
    {
        cout << "The id of the employee is ->  "<< id << endl;
    }
};
int main()
{

    employee abc[5];
    for (int i = 0; i < 5; i++)
    {
        abc[i].SetId();
        abc[i].displayId();

    }

    return 0;
}

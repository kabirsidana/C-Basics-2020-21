// print 1-100 without number which are divisible by 3
#include <iostream>
using namespace std;
int main()
{
    int num;
    for (int num = 1; num < 100; num++)
    {
        if (num % 3 == 0)

            cout << num << endl;
    }

    return 0;
}
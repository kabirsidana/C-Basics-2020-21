#include <iostream>
using namespace std;
void swappointer(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=5;
    int y=69;

    swappointer(&x,&y);
    cout<<x<<endl<<y<<endl;

    return 0;
}
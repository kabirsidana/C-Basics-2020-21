#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age here -:"<<endl;
    cin>>age;
    switch (age)
{
    case 18 :
    cout<<"yes you are eligible"<<endl;
    break;
    case 15 :
    cout<<"sorry you cant "<<endl;
    break;
    case 12 :
    cout<<"dont even think about comming to the party"<<endl;
    break;

    default :
    cout<<"contact us please for conformation";
}

    return 0;
}
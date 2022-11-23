#include <iostream>
#include <string>
using namespace std;
int main()
{   
    char name[20];
    cout<<"Enter your name here"<<endl;
    cin.get(name,20);
    cout<<name<<endl;
    int i=0,count=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<count;



    return 0;
}
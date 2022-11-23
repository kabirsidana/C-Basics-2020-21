#include <iostream>
#include <cstring>
using namespace std;
int main()
{   
     char st1[20];
     cout<<"Enter  Here"  <<endl;

     cin.get(st1,50);
     char st2[100];
     strcpy(st2,st1);
     cout<<st1<<endl<<st2;






    return 0;
}
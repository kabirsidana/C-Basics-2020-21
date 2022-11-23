//concatination of 2 strings or merge of 2 strings
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[10];
    char str2[25];
    cout<<"Enter Your |info-1|"<<endl;
    cin.get(str1,10);
    
    
    cout<<"Enter Your |info-2|"<<endl;
    cin>>str2;
    strcat(str2,str1);
    cout<<str2;




    return 0;
}
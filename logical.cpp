#include<iostream>
using namespace std;
int main()
{
    char alp;
    cout<<"enter the alphabet \n";
    cin>>alp;
    if( alp=='a' || alp=='e'|| alp=='i'||alp=='o' ||alp=='u')
    {cout<<"vowel"<<endl;}
    else
    {cout<<"not a vowel";abort}


    return 0;
}
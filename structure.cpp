#include <iostream>
#include <string>
using namespace std;
struct school
{
    int age;
    string name;
    float fees;  
};
 int main()
 {
     int i;
    struct school s1[10],s2,s3;
    cout<<"enter the values"<<endl;
    
    for(i=0;i<10;i++)
        {
        cin>>s1[i].age;
        }
        for(i=0;i<10;i++)
        { 

         cout<<s1[i].age<<endl; 
        }
        
    cout<<s1[3].age;

    return 0;

}
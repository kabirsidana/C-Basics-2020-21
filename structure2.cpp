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
    cout<<"enter the names"<<endl;
    
    for(i=0;i<4;i++)
        {
        cin>>s1[i].name;
        }
        for(i=0;i<4;i++)
        { 

         cout<<s1[i].name<<endl; 
        }
        
    

    return 0;

}
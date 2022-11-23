// copy a string into another through pointers 
#include <iostream>
using namespace std;
int main(){
char str1[5], str2[5];
cout<<"Enter in string 1"<<endl;
for(int j=0;j<5;j++){
    cin>>str1[j];
}
char *p1=&str1[0];
char *p2=&str2[0];
while(*p1!='\0'){
     *p2=*p1;
     p1++;
     p2++;
}
*p2='\0';
for (int i=0;i<5;i++){
    cout<<str2[i];
}
return 0;
}
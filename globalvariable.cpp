#include<iostream>
using namespace std;
int c=100;
int main(){
    int a , b , c;
    a=10;
    b=10;
    c=a+b;
//In this case it will print 20
cout<<"the sum is "<<c<<endl;
//In this case it will print 100
// because we use scope resolution operator ::
cout<<"the sum is "<<::c<<endl;
return 0;
}

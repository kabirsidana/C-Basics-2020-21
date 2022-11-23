#include <iostream>
using namespace std;
//this will not work 
// this is known as pass by value
// passbyvalue(int a , int b){
//     int temp = a;
//     a=b;
//     b=temp;
// }
passbyref(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
int x=5, y=6;
cout<<"Before Swaping "<<endl<<x<<endl<<y<<endl;
// passbyvalue(x,y);
passbyref(x,y);
cout<<"After Swaping "<<endl<<x<<endl<<y;

    return 0;
}
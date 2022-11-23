#include <iostream>
using namespace std;
int main(){
int num ;
int january=31, febuary=28;
cout<<"Enter"<<endl;
cin>>num;
if(num==1){
    cout<<"This Month has "<<january<<" days";
    return 0;
}
if(num==2){
    cout<<"This Month has "<<febuary<<" days";
    return 0;
}
}
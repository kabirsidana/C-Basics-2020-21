#include <iostream>
using namespace std;
class abc {
    int a,b;
    public:
    abc(int aa, int bb){
        a=aa;
        b=bb;

    }
//     public:
// void getdata(int aa,int bb){
//     int a=aa;
//     int b=bb; 

abc sum (abc ob1 , abc ob2){
    abc temp;
    temp.a=ob1.a+ob2.a;
    temp.b=ob1.b+ob2.b;
    return temp;
}
void display(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
}; 
int main()
{
    abc x(12,14);
    abc y(8,6);
    abc z;
    z.sum(x,y);
    // z.sum(x,y);
    z.display();

    return 0;
}
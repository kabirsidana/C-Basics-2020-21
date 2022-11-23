//defining outside class using scope resolution function ::
#include <iostream>
using namespace std;
class abc{
    int a,b;
    public:
    void setdata(){
        cout<<"ENTER THE VALUES OF A AND B"<<endl;
        cin>>a>>b;
    }
    void sum();
};
void abc :: sum(){
    cout<<"THE SUM IS "<<a+b;
}
int main()
{
    abc ob;
    ob.setdata();
    ob.sum();
    return 0;
}
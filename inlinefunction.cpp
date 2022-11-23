#include <iostream>
using namespace std;
inline int product(int a,int b) // inline is not a command it is 
                            //a request for compiler
{
    return (a*b);
}
int main()

{
    //inline functions are used when we use simple function multiple times 
    // when we use a function it copies the value in (here -a,b) the declared function 
    // then evaluate the process which is long process with inline function it just put 
    // the return there and save the time.
int x,y;
cout<<"Enter both number"<<endl;
cin>>x>>y;


cout<<product(x,y)<<endl;
cout<<product(x,y)<<endl;
cout<<product(x,y)<<endl;
return 0;

}
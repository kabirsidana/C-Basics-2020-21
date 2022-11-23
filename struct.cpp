#include<iostream>
using namespace std;

struct bio
{
    int roll;
    char section;
    float marks;
};
int main()

{
    struct bio kabir;
    struct bio rahul;
  kabir.roll=1;
  kabir.section='c';
  kabir.marks=433.3;

  rahul.roll=2;
  rahul.section='f';
  rahul.marks=126;
 
 
    cout<<kabir.roll<<endl;
    cout<<kabir.marks<<endl;
    cout<<rahul.marks<<endl;
return 0;
}
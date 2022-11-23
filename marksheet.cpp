#include<iostream>
using namespace std;
int main()
{
    char z='\t';
    int roll(10),a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,per;
    q=1;
    cout<<"Enter your English Theory Marks"<<endl;
    cin>>a;
    cout<<"Enter your English Practical Marks"<<endl;
    cin>>b;
    c=a+b;
    cout<<"Enter your Hindi Theory Marks"<<endl;
    cin>>d;
    cout<<"Enter your Hindi Practical Marks"<<endl;
    cin>>e;
    f=d+e;
    cout<<"Enter your Maths Theory Marks"<<endl;
    cin>>g;
    cout<<"Enter your Maths Practical Marks"<<endl;
    cin>>h;
    i=g+h;
    cout<<"Enter your Science Theory Marks"<<endl;
    cin>>j;
    cout<<"Enter your Science Practical Marks"<<endl;
    cin>>k;
    l=j+k;
    cout<<"Enter your SST Theory Marks"<<endl;
    cin>>m;
    cout<<"Enter your SST Practical Marks"<<endl;
    cin>>n;
    o=m+n;
    p=c+i+f+l+o;
    per=p/5;
   system("cls");
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"                 CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
    cout<<"                         Class 10th  MARKSHEET           "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Student Name -:      Kabir Sidana"<<endl;
    cout<<"Board Roll no.-:     843890"<<endl;
    cout<<"School No.-:         483934"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"                               MARKS           "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"      Sub      Theory     practical     total  "<<endl;
    cout<<  "      Eng""\t"<<a<<z<<z<<b<<z<<c<<endl;
    cout<<  "      hin""\t"<<d<<z<<z<<e<<z<<f<<endl;
    cout<<  "      maths""\t"<<g<<z<<z<<h<<z<<i<<endl;
    cout<<  "      sci""\t"<<j<<z<<z<<k<<z<<l<<endl;
    cout<<  "      sst""\t"<<m<<z<<z<<n<<z<<o<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"                              RESULT           "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    if(per<33)
     {cout<<"       FAIL"<<endl;}
    else{
       cout<<"      PASS"<<endl;}
       cout<<per<<endl;
    if(per>=70)
    {cout<<"1st Division"<<endl;}
     else if(per>=60)
    {cout<<"2nd Division"<<endl;}
    else if(per>=50)
    {cout<<"3rd Division"<<endl;}

   
   
   










return 0;






}

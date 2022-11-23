#include <iostream>
using namespace std;
union repay
{
    int code;
    char aplhabet;
    float money;

};
int main()
{   
   union repay home;
   home.code=87598;
   home.aplhabet='x';
   home.money=1234.89845;
   cout<<home.code<<endl;
   cout<<home.aplhabet<<endl;
   cout<<home.money<<endl;



    return 0;
}
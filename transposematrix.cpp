#include <iostream>
using namespace std;
int main()
{
    int array[3][2];
    int i,j;
    cout<<"enter matrix values"<<endl;
    for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>array[i][j];
            }

        }
          for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<"|"<<array[i][j];
            }
            cout<<"|"<<endl;
        }
        cout<<"THE TRANSPOSE IS HERE -:"<<endl;
    for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"|"<<array[j][i];
            }
            cout<<"|"<<endl;

        }




    return 0;
}
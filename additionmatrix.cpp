#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    char s='\t';
    cout<<"Enter Value in matrix 1"<<endl;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"ENTER VALUES IN MATRIX 2"<<endl;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>b[i][j];
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];

            }
        }
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<s<<c[i][j];
            }
            cout<<"|"<<endl;

        }



    return 0;
}
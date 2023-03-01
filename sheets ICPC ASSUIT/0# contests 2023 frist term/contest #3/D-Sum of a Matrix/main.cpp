#include <iostream>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);

    int row,col;
    int a[105][105];
    int b[105][105];
    int c[105][105];
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];


        }
    }
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>b[i][j];


        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout <<c[i][j]<<' ';
        }
        cout <<endl;
    }

     return 0;
}
//K H A L E D.......

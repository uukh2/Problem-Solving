#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<row ; i++)
    {
        for(int j=col-1 ; j>=0 ; j--)
        {
             cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }


    //K H A L E D..

    return 0;
}

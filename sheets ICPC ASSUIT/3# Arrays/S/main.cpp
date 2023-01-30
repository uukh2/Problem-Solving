#include <iostream>

using namespace std;

int main()
{
    long long n,row,col;
    cin >>row>>col;
    bool flag = false;
    int arr[105][105];
    for(int i=0 ; i<row; i++)
    {
        for(int j=0 ; j< col ; j++)
        {
            cin>>arr[i][j];
        }
    }
    long long s;
    cin>>s;
    for(int i=0 ; i<row; i++)
    {
        for(int j=0 ; j< col ; j++)
        {
            if(arr[i][j]==s){
                flag=true;
            }
        }
    }

    if(flag){
        cout <<"will not take number"<<endl;
    }
    else{
        cout <<"will take number"<<endl;
    }

    return 0;
}
//K H A L E D

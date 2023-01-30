#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,sum=0,sum1=0;
    cin>>n;
    int arr[n][n];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            if(n-1-j==i){
                sum1+=arr[i][j];
            }

        }
    }

            long long sub;
            sub=sum-sum1;
            if(sub>=0)
            {
                cout<<sub<<endl;
            }
            else
            {
                cout <<(sub*-1)<<"\n";
            }

    //cout <<sum<<" " <<sum1;

    return 0;
}
// K H A L E D

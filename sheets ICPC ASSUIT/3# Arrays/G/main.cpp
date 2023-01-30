#include <iostream>

using namespace std;

int main()
{
    long long n;
    bool flag=false;
    int arr[100005];
    cin>>n;
    for(int i=0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n; i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            flag=true;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout <<"YES\n";
    }

    return 0;
}
//K H A L E D

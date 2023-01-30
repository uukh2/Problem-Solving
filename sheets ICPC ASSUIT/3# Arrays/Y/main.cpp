#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long size,n;
    cin>>size>>n;
    long long arr[size];
    long long arr1[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i< size ; i++)
    {
        if(i == 0)
        {
            arr1[i] = arr[i];
        }
        else
        {
            arr1[i] = arr[i] + arr1[i-1];
        }
    }
    while(n--)
    {
        long long x,z;
        cin>>x>>z;
        x--;
        z--;
        long long sum = arr1[z] - arr1[x] + arr[x];
        cout<<sum<<endl;
    }
}
//KHALED...><

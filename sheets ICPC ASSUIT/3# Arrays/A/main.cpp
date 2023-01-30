#include <iostream>
using namespace std;
#define ll long long
//int arr[1000];

signed main()
{
    ll size; cin>>size;
ll sum=0;
for(int i=0;i<size;i++){
       int arr[size];
      cin>>arr[i];
      sum+=arr[i];
}
if(sum>=0){cout <<sum<<"\n";}
else{cout <<sum*-1<<"\n";}

    return 0;
}

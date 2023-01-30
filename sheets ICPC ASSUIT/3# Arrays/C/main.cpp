#include <iostream>
using namespace std;
#define ll long long
//int arr[1000];

signed main()
{

ll size; cin>>size;
int arr[size];
int i;
for(i=0;i<size;i++){cin>>arr[i];
if(arr[i]<0){ arr[i]=2;}
else if(arr[i]>0){arr[i]=1;}
else{arr[i]=0;}
cout<<arr[i]<<" ";
}


    return 0;
}
//K H A L E D

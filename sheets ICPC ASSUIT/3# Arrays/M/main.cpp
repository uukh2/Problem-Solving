#include <iostream>

using namespace std;

int main()
{
    int min=INT_MAX;
    int max=INT_MIN;
    int n,x=0,y=0;
    int arr[100005];
    cin>>n;
    for(int i = 0 ; i <n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]<=min){
            min=arr[i];
            x=i;
        }
        if(arr[i]>=max){
            max=arr[i];
            y=i;
        }
    }
    swap(arr[x],arr[y]);
    for(int i=0 ; i<n ; i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}
//K H A L E D

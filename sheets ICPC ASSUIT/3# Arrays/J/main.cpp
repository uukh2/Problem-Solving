#include <iostream>

using namespace std;

int main()
{
    int arr[100005];
   // int   f[100005]={0};
    long long x=0;
    bool a=false;
    int n; cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    long long minn=arr[0];
     for(int i=0 ; i<n ; i++){
        if(minn==arr[i]){
            x++;
        }
        if(minn>arr[i]){
            minn=arr[i];
            x=1;
        }
    }
    if(x%2==0){
        cout <<"Unlucky"<<endl;
    }
    else{
        cout <<"Lucky"<<endl;
    }


    return 0;
}
//K H A L E D

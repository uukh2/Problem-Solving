#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long t,n,x;
    int arr[10005];
	cin>>t;
	while(t--){
        x = 0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		x = n;
		int i = 0;
		int j = 0;
		while(true){
			if(j == n - 1){
				break;
			}
			if(arr[i] > arr[i+1]){
				j++;
				i=j;
				continue;
			}
			x++;
			i++;
			if(i == n - 1){
				j++;
				i = j;
			}
		}
		cout<<x<<endl;
	}
}
//K H A L E D........

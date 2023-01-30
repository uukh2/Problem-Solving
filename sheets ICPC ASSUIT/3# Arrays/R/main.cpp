#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	int arr[10005];
	int arr1[10005];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	sort(arr1,arr1+n);
	int flag = false;
	for(int i=0;i<n;i++){
		if(arr[i] != arr1[i]){ flag = true;  break; }
	}
	if(flag == false){ cout<<"yes"<<endl;}
	else { cout<<"no"<<endl;}
	return 0;
}
//K H A L E D...........

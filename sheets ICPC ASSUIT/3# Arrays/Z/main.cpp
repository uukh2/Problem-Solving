#include<bits/stdc++.h>

using namespace std;



int bs(int arr[],int x,int y,int z){
	while(x <= y){
		int w = x + (y-x)/2;
		if(arr[w] == z){
			return w;
		} else if (arr[w] < z){
			x = w + 1;
		} else {
			y = w - 1;
		}
	}
	return -1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	while(k--){ // 3    3 2 1
		int z;
		cin>>z;
		int r = bs(arr,0,n-1,z);
		if(r == -1){
			cout<<"not found\n";
		} else {
			cout<<"found"<<endl;
		}
	}
	return 0;
}
//KHALED<.....>

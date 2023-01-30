#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
			cout<<A[i]<<" ";
		}
		long long i=0,y = 0;
        int maxx=0;
		while(2){
			if(y==n-1){ break; }
			if(i==y){maxx= max(A[i],A[i+1]);}
			else    {maxx = max(maxx,A[i+1]);}
			cout<<maxx<<" ";
			i++;
			if(i==n-1){ y++; i=y; }
		}
		cout<<endl;
	}
}
//K H A L E D

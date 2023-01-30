#include<iostream>

using namespace std;

int main()
{
	long long x,sum;
	cin>>x;
	long long  y = 0;
	long long  z = 1;
	if(x == 1){ cout<<y<<endl;}
	 else if(x == 2){cout<<z<<endl;}
	  else {
		for(int i=3;i<=x;i++){
			sum=y+z;
			y = z;
			z = sum;
			}
		cout<<z<<endl;
	}
}
//khaled *__^

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	char arr[105][105];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	x-=1;
	y-=1;
	if( (arr[x][y-1]!= '.')&&
        (arr[x][y+1]!= '.')&&
        (arr[x-1][y]!= '.')&&
        (arr[x+1][y]!= '.')&&
        (arr[x-1][y-1]!= '.')&&
        (arr[x-1][y+1]!= '.')&&
        (arr[x+1][y-1]!= '.')&&
        (arr[x+1][y+1]!= '.'))
        {cout<<"yes";}
	else {cout<<"no";}

	return 0 ;
}
//K H A L E D.......

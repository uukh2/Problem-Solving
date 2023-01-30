#include <iostream>
using namespace std;
#define ll long long
//int arr[1000];

signed main()
{

ll size;cin>>size;
bool f=false;
int arr[size];
int i;
for(i=0;i<size;i++){cin>>arr[i];}
ll x;cin>>x;
for(i=0;i<size;i++){
if(arr[i]==x){
f=true;break;}}
if(f){cout <<i<<"\n";}
else{cout <<-1<<"\n";}


    return 0;
}

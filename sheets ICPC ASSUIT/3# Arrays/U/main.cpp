//U.ARRAYS


//i am here..
//this is my code.. let's go...

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
#define int long long
#define uint unsigned long long
#define fastcode
#define vll vector<ll>
#define vvll vector<ll>
#define all(v) v.begin(),v.end()
#define all(v) v.rbegin(),v.rend()
#define sz(s) (int)(s.size())
//ll arr[100000];



signed main()
{
 std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);

 int size1,size2; cin>>size1>>size2;
 int a[size1];
int b[size2];
 for(int i=0;i<size1;i++){
    cin>>a[i];
 }
for(int i=0;i<size2;i++){
    cin>>b[i];
}
int j=0;
for(int i=0;i<size1;i++){
    if(a[i]==b[j]){j++;}
}
    if(j==size2){cout <<"YES\n";}
    else{cout <<"NO\n";}
    return 0;
}
//K H A L E D *___^.

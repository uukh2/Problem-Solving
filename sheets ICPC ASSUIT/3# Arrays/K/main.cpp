
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

//int arr[1000];


signed main()
{
 std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);
 int x; cin>>x;
 string s; cin>>s;

 int sum=0;
 for(int i=0 ; i<s.length(); i++){
    sum+=(int) s[i]-48;
 }
 cout <<sum<<endl;



    return 0;
}
//K H A L E D *___^.

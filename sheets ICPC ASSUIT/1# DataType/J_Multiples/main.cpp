#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fastcode
#define vll vector<ll>
#define vvll vector<ll>
#define all(v) v.begin(),v.end()
#define all(v) v.rbegin(),v.rend()
#define sz(s) (int)(s.size())




int main()
{
 std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);

 int a,b; cin>>a>>b;

 if(b%a==0||a%b==0){
    cout <<"Multiples"<<endl;
 }
 else{
    cout<<"No Multiples"<<endl;
 }

    return 0;
}

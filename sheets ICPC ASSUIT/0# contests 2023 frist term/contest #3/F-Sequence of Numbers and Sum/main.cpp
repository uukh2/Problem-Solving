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

 int num1,num2;

 while(cin>>num1>>num2){ ll sum=0; int mini=0,max=0; if(num1<=0||num2<=0){return 0;}
 if(num1>=num2){max=num1; mini=num2;}else{max=num2; mini=num1;}
 for(int i=mini;i<=max;i++){cout <<i<<" "; sum=sum+i;} cout <<"sum ="<<sum<<endl;}

    return 0;
}
//K H A L E D *___^.

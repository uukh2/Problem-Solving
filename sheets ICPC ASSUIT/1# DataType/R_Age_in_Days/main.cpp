
//i am here..
//this is my code.. let's go...

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

 int age; cin>>age;
 int year=0,month=0,day=0;
 year=age/365;
 age=age%365;
 month=age/30;
 day=age%30;

 cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;

    return 0;
}
//K H A L E D *___^.

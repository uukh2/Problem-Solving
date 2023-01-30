
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

 double num; cin>>num;

 if(num<=25&&num>0){cout<<"Interval "<<"[0,25]"<<endl;}
 else if(num>25&&num<=50){cout<<"Interval "<<"(25,50]"<<endl;}
 else if(num>50&&num<=75){cout<<"Interval "<<"(50,75]"<<endl;}
 else if(num>75&&num<=100){cout<<"Interval "<<"(75,100]"<<endl;}
 else {cout<<"Out of Intervals"<<endl;}

    return 0;
}
//K H A L E D *___^.

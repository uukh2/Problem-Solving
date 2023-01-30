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
int arr[100005];
int a[100005];



signed main()
{
 std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);

    int num1,num2; cin>>num1>>num2;

    for(int i=0;i<num1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=num1;i++){
       a[arr[i]]++;
    }

    for(int i=1;i<=num2;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
//K H A L E D *___^.

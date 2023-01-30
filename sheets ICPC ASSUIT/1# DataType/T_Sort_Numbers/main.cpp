
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

 double a, b, c, k;cin >> a >> b >> c;
int d = a;
int f = b;
int t = c;

 if (a > b){
        k = a; a = b; b = k;}
if (b > c){
        k = b; b = c; c = k;}
    if (a > b){k = a; a = b; b = k;}

    cout << a << endl << b << endl << c << endl << endl;
    cout << d << endl << f << endl << t << endl;

    return 0;
}
//K H A L E D *___^.


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

     ll x; cin >> x; x = x % 100;
     ll y; cin >> y; y = y % 100;
     ll z; cin >> z; z = z % 100;
     ll r; cin >> r; r = r % 100;
     ll sum; sum = (x * y * z * r) % 100;
     if (sum < 10) cout << "0" << sum << endl; else cout << sum << endl;

    return 0;
}
//K H A L E D *___^.


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

 int x1, y1; cin >> x1 >> y1;
int x2, y2;cin >> x2 >> y2;

    if (x1 > y2 || y1 < x2) cout << -1; else cout << max(x1, x2) << " " << min(y1, y2);

    return 0;
}
//K H A L E D *___^.

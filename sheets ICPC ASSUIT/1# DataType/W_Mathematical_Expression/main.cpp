
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

  double k,a,e;
    char h,l;
    cin >> k >> h >> a >> l >> e;

    if (h == '+'){if (k + a == e)cout << "Yes" << endl;  else cout << k+a << endl;}
    if (h == '-'){if (k - a == e)cout << "Yes" << endl;  else cout << k-a << endl;}
    if (h == '*'){if (k * a == e) cout << "Yes" << endl;  else cout << k*a << endl;}

    return 0;
}
//K H A L E D *___^.

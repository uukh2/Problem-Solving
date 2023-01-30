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


    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];
    sort (arr, arr + 3);
    cout << arr[0] << " " << arr[2];

    return 0;
}
//K H A L E D *___^.

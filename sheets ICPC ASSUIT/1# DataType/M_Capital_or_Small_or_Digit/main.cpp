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

  char word; cin >> word;

    if (word >= 65 && word <= 90){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;}
    else if (word >= 97 && word <= 122){
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;}
    else{
        cout << "IS DIGIT" << endl;}


    return 0;
}
//K H A L E D *___^.

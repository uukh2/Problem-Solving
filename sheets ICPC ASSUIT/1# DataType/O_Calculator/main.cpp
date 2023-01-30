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

     ll num1,num2,x; char opr; cin>>num1>>opr>>num2;

     switch(opr){
 case '+':
    cout <<num1+num2<<endl;
    break;
 case '-':
    cout <<num1-num2<<endl;
        break;
 case'*':
    cout <<num1*num2<<endl;
        break;
 case '/':
     if (num2 == 0) {
            break;}
        else {
    cout <<num1/num2<<endl;
        break;}}

    return 0;
}
//K H A L E D *___^.

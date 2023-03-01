
//i am here..
//this is my code.. let's go...

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
//#define int long long
//#define uint unsigned long long
//#define fastcode




int main()
{
 std::ios_base::sync_with_stdio(0);
 cin.tie(NULL);

    int arr[105];
    int t,n;
    int c=0;
     double s=0,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        c=0;
        s=ceil(n*m);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
             if(arr[i]>=50)
                {
                c++;
                }
        }
         /* for(int i=0 ; i<n ; i++){//45 46 48 48 50
                //100 99 98 97 100
          }*/

          if(c>=s){
            cout <<"YES"<<endl;
          }
          else{
            cout <<"NO"<<endl;
          }
          }



            //cout <<ceil(5*0.60)<<endl;
   return 0;
}
//K H A L E D *___^.

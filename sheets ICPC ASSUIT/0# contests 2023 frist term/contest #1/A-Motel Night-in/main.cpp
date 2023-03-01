#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
long long n,y;
  double a,b;
  cin>>n>>y;
  a=0.6666666666666667*n;
  b=0.3333333333333333*n;

  if(y>=a){
    cout <<"Sunny Day"<<endl;
  }
  else if(y<=b){
    cout <<"Rainy Day"<<endl;
  }
  else  {
    cout <<"Cloudy Day"<<endl;
  }
    return 0;
}
//khaled....

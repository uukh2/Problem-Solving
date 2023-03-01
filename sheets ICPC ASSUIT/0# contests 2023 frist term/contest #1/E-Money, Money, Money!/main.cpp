#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x,y,z,n,n1,sub;
    cin>>x>>y>>z;
    n=x*z;
    n1=x*y;
    sub=n-n1;
    if(sub<0)
    {
        cout <<(sub*-1)<<endl;
    }
    else
    {
        cout <<sub<<endl;
    }
    return 0;
}
//khaled.....

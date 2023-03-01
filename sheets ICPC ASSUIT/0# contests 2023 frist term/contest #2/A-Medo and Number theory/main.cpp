#include <iostream>

using namespace std;

int main()
{
    long long x=1,y,z,k=1,m;
    cin>>x>>y>>z;
    for(int i=x ; i<=y ; i++){
        //i%=z;
        k*=i%z;
       k%=z;


    }

    k=(k%z);
    cout <<k;

    return 0;
}
//khaled.......

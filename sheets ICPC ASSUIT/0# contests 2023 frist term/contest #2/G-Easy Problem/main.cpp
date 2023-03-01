#include <iostream>

using namespace std;

int main()
{
    long long n,n1,r=0,size=0;
    cin>>n;
    n1=n;
    while(n>0){
            int x=n%10;
        n/=10;
        r*=10;
    r+=x;
    size++;
    }
    for(int i=0 ; i<(size+1)/2 ; i++){
        cout <<(r%10+n1%10)<<endl;
        r/=10;
        n1/=10;
    }
    return 0;
}
//khaled..

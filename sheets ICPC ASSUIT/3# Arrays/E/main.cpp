#include <iostream>

using namespace std;

int main()
{
   int size1,n; cin>>size1;
  int arr[size1];
   int m=INT_MAX;
   for(int i=0;i<size1;i++){
    cin>>arr[i];
    //m=arr[0];
   if(arr[i]<m){ m=arr[i]; n=i+1; }
   }
   cout<<m<<" "<<n;


    return 0;
}
//K H A L E D

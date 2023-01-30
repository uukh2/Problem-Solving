#include <iostream>

using namespace std;

int main()
{
        //bool c=0;
        long long n,x=0,count =0;
        cin>>n;
        int arr[10005];
        for(int j=0 ; j <n ; j++)
        {
            cin>>arr[j];
        }

        for(int j=0 ; j< n ; j++)
        {
                  // 4 6 20
            if(arr[j]%2!=0)
            {
               cout <<0 <<endl;
               return 0;
            }


		while(arr[j] % 2 == 0){
			count++;
			arr[j] /=2;
		}

        //count++;

    if(j==0||count<x){ x=count; }
        count=0;
        }

        cout<<x<<endl;

    return 0;
}
//K H A L E D

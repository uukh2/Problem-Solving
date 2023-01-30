#include <iostream>

using namespace std;

int main()
{
    long long sizee,n,minn=INT_MAX,k=0;
    bool flag=false;
    int arr[105];
    cin>>sizee;
    while(sizee--)
    {
        minn=INT_MAX;
        cin>>n;
        if(n>=2){
        for(int i=1; i<n+1 ; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<n ; i++)
        {
            for(int j=i+1 ; j<n+1 ; j++)
            {
                if(i<j)
                {
                    k=arr[i]+arr[j]+(j-i);
                    if(k<=minn)
                    {
                        minn=k;

                    }
                }
            }

        }

        }
        cout <<minn<<endl;
    }



    return 0;
}
//K H A L E D

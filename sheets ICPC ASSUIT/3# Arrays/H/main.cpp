#include <iostream>

using namespace std;
int main()
{
    /*
    int x,m=0;
    cin>>x;
    int arr[1005];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        m+=arr[i];
        }
    cout <<m<<endl;
    */











    /*
        int x,m;
        cin>>x;
        bool flag=false;
        int arr[105];
        for(int i=0;i<x;i++){
        cin>>arr[i];
        }
        cin>>m;
        for(int i=0;i<x;i++){
             if(m==arr[i]){
                flag=true;
                break;
             }
        }
        if(flag==true){
            cout <<"Exist"<<endl;
        }
        else{
            cout <<"Not Exist"<<endl;
        }

    */






    /*
        int x,s,W;
        cin>>x;
        int arr[1005];
         s=INT_MAX;
        W=INT_MIN;
       for(int i=0 ; i<x;i++){
        cin>>arr[i];

        if(arr[i]<=s){
           s=arr[i];
        }
        else if(arr[i]>=W){
           W=arr[i];
        }
       }

       if(s>=W){
        cout <<"max : "<<s<<endl;
        cout <<"min : "<<W<<endl;

       }
       else{
        cout <<"max : "<<W<<endl;
        cout <<"min : "<<s<<endl;
       }


    */
















    /*


        char arr[105];
        int n; cin>>n;
        for(int i=0 ; i<n ; i++){
                cin>>arr[i];
            if(arr[i]>=65&&arr[i]<=90){
                cout <<(char)(arr[i]+32);
            }
        else{
            cout <<(char)(arr[i]-32);
        }
        }
    */






    /*

        char arr[1005];
        int n;
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                if(arr[i]>=65&&arr[i]<=90)
                {
                    cout <<(char)(arr[i]-32);
                }
                else
                {
                    cout <<(char)arr[i];
                }
            }
            else
            {
                if(arr[i]>=97&&arr[i]<=122)
                {
                    cout <<(char)(arr[i]-32);
                }
                else
                {
                    cout <<(char)arr[i];
                }

            }
        }

    */






















/*
        char arr[1005];

        int n;
        cin>>n;

        for(int i=0 ; i<n;i++){cin>>arr[i];}

            for(int i=0 ; i<(n-1)/2;i++){
            swap(arr[i],arr[n-i-1]);
            }
             for(int i=0 ; i<n;i++){
            cout<<arr[i];
            }




*/












/*

    int arr[3][3];
   // int n;
   // cin>>n;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
   /* for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }


    int max=INT_MIN,min=INT_MAX;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        cout<<"rwo "<<i<<" : "<<min<<" "<<max<<"\n";
          max=INT_MIN,min=INT_MAX;
    }


*/

 /*char arr[10];

        int n;
        cin>>n;

        for(int i=0 ; i<n;i++){cin>>arr[i];}

            for(int i=0 ; i<(n-1)/2;i++){
            swap(arr[i],arr[n-i-1]);
            }
             for(int i=0 ; i<n;i++){
            cout<<arr[i];
            }
*/
















/*

    int arr[3][3];
   // int n;
   // cin>>n;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
   /* for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }


    int sum=0,sum1=0;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
          if(arr[i][j]%2==0){
            sum+=arr[i][j];
          }
          else{
            sum1+=arr[i][j];

            }
    }
        cout <<sum<<" "<<sum1<<endl;
        sum=0;
        sum1=0;

    }
*/












/*



    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
   /* for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
*/



    int  n ;
    cin>>n;
    int arr[1005] ;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0; i < (n-1); i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
        }
    }
    for(int i = 0; i < n; i++) {cout << arr[i] << " ";}







    return 0;
}
//K H A L E D

#include <iostream>

using namespace std;

int main()
{

    long long num,a,count=0,count1=0;
    cin>>num;

    while(num){
        a=num%10;//3
        if(num%2==0){
            count++;
        }

        else {
                count1++;//1
                }
            num/=10;

        }
        cout <<"Even : "<<count<<endl;
          cout <<"Odd : "<<count1<<endl;


    return 0;
}
//khaled.......

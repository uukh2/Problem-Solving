/************************************************************************بسم الله الرحمن الرحيم*************************************************************************/
/**                                                                      "وما توفيقي الا بالله"                                                                       */
//i am here..
//this is my code.. let's go...

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define en '\n'
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define gcd(a,b) __gcd(a,b)
#define uu_kh2 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 3.1415926535
#define pb push_back
#define sp " "
const int lmax=1e18;
const int imax=1e5+7;

//int add(int k , int h , int l){return ((k%l)+(h%l))%l }
//int sub(int k , int h , int l){return ((k%l)-(h%l)+l)%l }
//int mul(int k , int h , int l){return ((k%l)*(h%l))%l }
//int power(int k , int h){ int o=1; while(h){if(h%2==1){o*=k;} k*=k; h/=2; } return o; }
//int modpower(int k , int h , int l){int o=1; while(h){if(h%2==1){o*=k%l;} k=mul(k,h,l); h/=2; } return o; }
bool composite[imax];
void prime_number();
void print_prime_form_frist_to_end();
void print_prime_to_number();
void IS_Prime();
/************_______^*********************** my solve ***************************************************************************%___________^***********************/

signed main()
{
    uu_kh2
    //int sizeofarr = sizeof(arr)/sizeof(arr[0]);// عباره عن حجم عناصر الاراي علي حجم العنصر الواحد يديني عدد العناصر الموجوده في الاراي
    //int n = sizeofarr;

int luckyNumbers[100000] = { 0 }, flag = 0;
    luckyNumbers[4] = 1;
    luckyNumbers[7] = 1;
    luckyNumbers[44] = 1;
    luckyNumbers[47] = 1;
    luckyNumbers[74] = 1;
    luckyNumbers[77] = 1;
    luckyNumbers[444] = 1;
    luckyNumbers[447] = 1;
    luckyNumbers[474] = 1;
    luckyNumbers[477] = 1;
    luckyNumbers[774] = 1;
    luckyNumbers[777] = 1;
    luckyNumbers[747] = 1;
    luckyNumbers[744] = 1;
    luckyNumbers[4747] = 1;
    luckyNumbers[4444] = 1;
    luckyNumbers[4447] = 1;
    luckyNumbers[4474] = 1;
    luckyNumbers[4477] = 1;
    luckyNumbers[4777] = 1;
    luckyNumbers[4744] = 1;
    luckyNumbers[4774] = 1;
    luckyNumbers[7474] = 1;
    luckyNumbers[7777] = 1;
    luckyNumbers[7774] = 1;
    luckyNumbers[7747] = 1;
    luckyNumbers[7744] = 1;
    luckyNumbers[4477] = 1;
    luckyNumbers[7444] = 1;
    luckyNumbers[7477] = 1;
    luckyNumbers[7447] = 1;

    int n1, n2;cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++) {if (luckyNumbers[i] == 1) {cout << i << " ";flag = 1;}}

    if (flag == 0) {cout << "-1" << endl;}
    return 0;
}
/** K H A L E D *___^ **/
/**
   ***       ***        ***        ***                  ****                    ***                         *******************      ********
   ***      ***         ***        ***                ***  ***                  ***                         *******************      ***    ***
   ***     ***          ***        ***               ***    ***                 ***                         ***                      ***     ***
   ***    ***           ***        ***              ***      ***                ***                         ***                      ***      ***
   ***   ***            ***        ***             ***        ***               ***                         ***                      ***       ***
   ***  ***             **************            ****************              ***                         *******************      ***       ***
   *******              **************           ******************             ***                         *******************      ***       ***
   ***  ***             ***        ***          ***              ***            ***                         ***                      ***       ***
   ***   ***            ***        ***         ***                ***           ***                         ***                      ***      ***
   ***    ***           ***        ***        ***                  ***          ***                         ***                      ***     ***
   ***     ***          ***        ***       ***                    ***         *******************         *******************      ***    ***
   ***      ***         ***        ***      ***                      ***        *******************         *******************      ********
**/
/************_______^*********************** KHALED *_____^ ******************************************************************%___________^**************************/

void prime_number()
{
    composite[0]= composite[1]=1;
    for(int i=2 ; i*i <= imax ; i++)if(!composite[i])for(int j=i*i ; j<=imax ; j+=i)composite[j]=1;
}
void print_prime_form_frist_to_end()
{
    int frist_prime,end_prime;
    cin>>frist_prime>>end_prime;
    prime_number();
    for(int step=frist_prime ; step <=end_prime; step++)if(!composite[step])cout<<step<<" ";
}
void print_prime_to_number()
{
    int number;
    cin>>number;
    prime_number();
    for(int step=2 ; step <=number; step++)if(!composite[step])cout<<step<<" ";
}
void IS_Prime()
{
    int number;
    cin>>number;
    prime_number();
    cout<<(!composite[number]?"YES":"NO")<<en;
}
/*int age; cin>>age;
 int year=0,month=0,day=0;
 year=age/365;
 age=age%365;
 month=age/30;
 day=age%30;

 cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2;  cin>>num1>>num2;
    string word;    cin>>word;

    if(num1+num2+1 != word.size())
    {
        cout<<"No"<<endl;
        return 0;
    }

    if(word[num1] != '-')
    {
        cout<<"No"<<endl;
        return 0;
    }

    int c = 0;
    for(int i=0; i<word.size(); i++)
    {
        if(word[i] >= 48 && word[i] <=57 && i != num1)
        {
            c++;
        }
    }
    if(c == num1+num2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
//KHALED>.....<

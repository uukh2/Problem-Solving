#include <iostream>

using namespace std;

int main()
{
    long long x,y,z;
    char op='+,-,*';
    char comp='=,>,<';
    cin>>x>>op>>y>>comp>>z;
    if ((op=='+') && (comp=='=') && (x+y==z)){
        cout<<"YES";
    }
    else if ((op=='+') && (comp=='>') && (x+y>z)){
        cout<<"YES";
    }
    else if ((op=='+') && (comp=='<') && (x+y<z)){
        cout<<"YES";
    }
    else if ((op=='-') && (comp=='=') && (x-y==z)){
        cout<<"YES";
    }
    else if ((op=='-') && (comp=='>') && (x-y>z)){
        cout<<"YES";
    }
    else if ((op=='-') && (comp=='<') && (x-y<z)){
        cout<<"YES";
    }
    else if ((op=='*') && (comp=='=') && (x*y==z)){
        cout<<"YES";
    }
     else if ((op=='*') && (comp=='>') && (x*y>z)){
        cout<<"YES";
     }
    else if ((op=='*') && (comp=='<') && (x*y<z)){
        cout<<"YES";
    }
       else if ((op=='+') && (comp=='=') && (x+y!=z)){
        cout<<"NO";
    }
    else if ((op=='+') && (comp=='>') && (x+y<=z)){
        cout<<"NO";
    }
    else if ((op=='+') && (comp=='<') && (x+y>=z)){
        cout<<"NO";
    }
    else if ((op=='-') && (comp=='=') && (x-y!=z)){
        cout<<"NO";
    }
    else if ((op=='-') && (comp=='>') && (x-y<=z)){
        cout<<"NO";
    }
    else if ((op=='-') && (comp=='<') && (x-y>=z)){
        cout<<"NO";
    }
    else if ((op=='*') && (comp=='=') && (x*y!=z)){
        cout<<"NO";
    }
     else if ((op=='*') && (comp=='>') && (x*y<=z)){
        cout<<"NO";
     }
    else if ((op=='*') && (comp=='<') && (x*y>=z)){
        cout<<"NO";
    }
}

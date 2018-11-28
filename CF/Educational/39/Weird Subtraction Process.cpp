#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a=0,b=0;
    cin>>a>>b;

    while(1)
    {
        if(a==0 || b==0) break;

        if(a >= (2*b)){
            a = a%(2*b);
            //cout << a << "  ins a"<< endl;
            continue;
        }
        if(b >= (2*a)){
            b = b%(2*a);
            //cout << b << "  ins b"<< endl;
            continue;
        }
        break;
    }




    cout << a << " "<<b << endl;

}

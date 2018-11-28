#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,a = 0,b = 0;
    cin >> n >> m;

    ll totEdge = m*2;

    if(m >= n-1)a = 0,b = 0;

    else if(m < n - 1)
    {
        b = n-1-m;

        if(totEdge < n){

            a = n - (totEdge * 2);
        }
        else a = 0;
    }
    cout << a << " " << b << endl;

    return 0;
}

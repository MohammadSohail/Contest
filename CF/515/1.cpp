#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll L,v,l,r,c = 0;
        cin >> L >> v >> l >> r;

        c = (r/v) - ((l-1)/v);

        ll n = L/v;

        cout << n - c << endl;

    }

}

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,m,k,l;
    cin >> n >> m >> k >> l;

    if(n < m){
        cout << -1 << endl;
    }
    else
    {
        ll newcoins = m - k;

        if(newcoins >= l){
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
}

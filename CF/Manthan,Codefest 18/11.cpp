#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, s, ans = 0;

    cin >> n >> s;

    ll a [n] ;

    for ( ll i = 0 ; i < n ; i ++ )
        cin >> a [ i ] ;
    sort ( a, a + n ) ;
    while ( a [ n / 2 ] != s )
    {
        ans += abs ( a [ n / 2 ] - s ) ;
        a [ n / 2 ] = s ;
        sort ( a, a+ n ) ;
        if ( a [ n / 2 ] == s )
            break ;
    }
    cout << ans ;
    return 0;
}

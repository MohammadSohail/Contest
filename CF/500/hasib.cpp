#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve( ll n, ll g ) {
    ll cnt = 0;
    ll l = 1, r = n;

    while( l < r ) {
        ll mid = (l+r)/2;
        if( r == l )
            return cnt;
        if( r - l == 1 ){
            cnt++;
            return cnt;
        }

        if( mid > g ) {
            r = mid - 1;
        }
        if( mid < g ){
            l = mid + 1;
        }

        cnt ++ ;
    }
    return cnt;
}


ll binarySearch(ll L, ll H, ll key) {
    ll lo = L, hi = H, mid, cnt = 0;;
    while (lo < hi) {
        cnt++;
        mid = (lo + hi) / 2;
        if (mid >= key) hi = mid;
        else lo = mid + 1;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef caffeines
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // caffeines
    ll n, g;
    //while( cin>> n>> g ) {
    cin>>n>>g;
    cout<<binarySearch( 1, n , g)<<endl;;
    //}

    return 0;
}



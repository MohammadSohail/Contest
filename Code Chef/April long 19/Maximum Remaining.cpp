#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll a[n+5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    cout << a[n-1] << endl;
    return 0;
}

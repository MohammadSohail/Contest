#include <bits/stdc++.h>
using namespace std;
#define lol long long
int a[101];
vector<int>v;

int main()
{
    int n,m,sum=0,mx=0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
        mx = max(mx,a[i]);
    }
    sum += m;

    int mn;
    if(sum%n != 0){
        mn = (sum/n)+1;
    }
    else mn = (sum/n);

     if(mn < mx){
        mn = mx;
    }

    mx += m;

    cout << mn << " " << mx << endl;
}

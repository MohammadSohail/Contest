#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,s,ans=0;
    cin >> n >> s;

    vector<int>v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(),v.end());

//    for(ll i = 0; i < n; i++){
//        cout << arr[i];
//    }

        for(int i = 0; i <= n/2; i++){

        if(v[i]>s)ans += v[i]-s;
        cout << ans << " half "<<endl;

        }


        for(int i = n/2; i < n; i++){

        if(v[i] < s)ans += s - v[i];
         cout << ans << endl;

        }


//    while (arr[n/2] != s){
//
//        ans += abs(s - arr[n/2]);
//
//        arr[n/2] = s;
//
//        sort(arr,arr+n);
//
//
//        if (arr[n/2] == s)
//            break ;
//    }

    printf("%lld\n",ans);
}

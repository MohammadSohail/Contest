#include <bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long               ll;

int main(){

    FasterIO;
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);

	ll n;
	cin >> n;

	ll ans = 0;

	while(n){
        ans += n/2;
        n--;
	}

	cout << ans << endl;
}


#include<bits/stdc++.h>
#define SIZE 10001
#define ll long long


using namespace std;
int main(){
    int kase;
    cin>>kase;
    while(kase--){
            vector<int>a;
        ll n,h,max=0,p=0;
        cin >> n >> h;
        for( ll i=1;i<=n;i++){
            cin>>p;
            a.push_back(p);
        }

        max=*max_element(a.begin(),a.end());

        for(ll i = 1; i <= max ; i++) {
            ll co = 0, minimum = 0;
            for (int j : a) {
                minimum = ceil(j * 1.0 / i);
                co += minimum;

            }
            if (co <= h) {
                cout << i << endl;
                i = max + 1;
            }
        }
    }
    return 0;
}

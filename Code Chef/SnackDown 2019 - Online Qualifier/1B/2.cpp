#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k,ans = 0;
        cin >> n >> k;

        int a[n+5];

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                ans++;
            }
        }
        if(ans + k >= n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}

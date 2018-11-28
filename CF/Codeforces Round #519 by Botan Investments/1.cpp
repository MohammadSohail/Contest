#include<bits/stdc++.h>
using namespace std;


int main()
{
        int n,sol = 0;
        cin >> n;

        int a[n+1];

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sol += a[i];
        }

        sort(a,a+n);

        int mx = a[n-1],ans = 0;

         for(int i = 0; i < n; i++){
            ans += (mx - a[i]);
        }

        if(ans > sol){

         cout << mx << endl;
        }
        else{


            while(ans <= sol){

                mx++;
                ans = 0;

                for(int i = 0; i < n; i++){
                    ans += (mx - a[i]);
                }
                //cout << ans << endl;
            }

            cout << mx << endl;
        }

    return 0;
}

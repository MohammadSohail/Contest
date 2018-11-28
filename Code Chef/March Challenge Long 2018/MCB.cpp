#include <bits/stdc++.h>
using namespace std;
#define N 100005
int main() {
    int t;
    int arr[N];
    int b[N];
    cin>>t;

    while(t--)
    {
        int n,h,sum=0,x=0,flag=0,m=0;
        //memset(arr,-1, sizeof(arr));
        cin>>n>>h;

        for (int i = 0; i < n ; ++i) {
            cin >> arr[i];

            sum += arr[i];
            m = max(m,arr[i]);
            // cout << arr[x] << " ff" << endl;
        }

        int p,q,res;
        int result = 2147483647;

        for (int j = 0; j < n ; ++j) {
            res = 0,p = 0,q = 0;
            for (int i = 0; i < n; ++i) {
                p = arr[i] / arr[j];
                q = arr[i] % arr[j];

                p == 0 && q != 0 ? (res++) : (res = (p + q));

                if(res == h){
                    cout << arr[j] << endl;
                }
            }



        }

    }
    return 0;
}
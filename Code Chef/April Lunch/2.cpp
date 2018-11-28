#include<bits/stdc++.h>
using namespace std;

int sol(int a,int k){

    if( a==1){
        return 0;
    }

    for(int i = 2; i <= k; i++){
        if(a % i == 0){
            a /= i;
            //if(a == 1) break;
        }
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--){

    int a[105],k=0,n=0,counter=0;

    cin >> n >> k;

    for(int i = 0; i < n; i++){

        cin >> a[i];

        if(sol(a[i],k) == 1){
            counter ++;
        }
    }

    for(int i = 0; i < n; i++){

        int b = __gcd(a[i],a[i+1]);
        cout << b << endl;
    }
    if(counter == n)cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
}

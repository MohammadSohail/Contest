#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt = 0;
    cin >> n >> k;
    int c[n+1], w[k+1];

    for(int i = 0; i < n; i++)cin >> c[i];
    for(int i = 0; i < k; i++)cin >> w[i];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){

             if(w[i] && c[j]){

                if(w[i] >= c[j]){
                    cnt++;
                    w[i] = c[j] = 0;
                    break;
                }
                else{

                    c[j] = 0;

                }
        }
        }
    }

    for(int i = 0, j= 0; i < k; i++){

    }
    cout << cnt << endl;
}

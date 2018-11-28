#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        memset(a,0,sizeof(a));
        double sum = 0.000000;
        for(int i = 0; i < n; i++){

            cin >> a[i];
        //cout << sum << endl;

        }

        for(int i = 0; i < n; i++){

        if(a[i] == 0)sum += 0;
        else sum += (1/a[i]);

        }
        sum /= n;
        printf("%.6f",sum);
        cout << endl;
    }
}

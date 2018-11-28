#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1],h[n+1];

    for(int i = 0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int mx=0,mn=0;
    h[0] = max(a[0],b[0]);
    bool flag = false;
    for(int i = 1; i<n; i++)
    {

        mx = max(a[i],b[i]);
        mn = min(a[i],b[i]);

        if(mx <= h[i-1])
        {
            h[i] = mx;
        }
        else
        {
            if(mn <= h[i-1])
            {
                h[i] = mn;
            }
            else
            {
                flag = false;
                return cout<<"no\n",0;
            }
        }
    }
    cout<<"yes"<< endl;

}

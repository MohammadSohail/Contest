#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin >> n >> m;
    vector<int>taxi,rider;
    ll a[n+m];
    ll b[n+m];

    for(int i = 0; i < n+m ; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n+m ; i++)
    {
        cin >> b[i];
        if(b[i] == 0)rider.push_back(a[i]);
        else taxi.push_back(a[i]);
    }

    vector<int>ans;

    for(int i:rider)
    {
        auto pos = lower_bound(taxi.begin(),taxi.end(),i);
        //cout << *pos << endl;
        int dis = 111;
        int disii = -1;
        if(pos != taxi.end())
        {
                dis = i - *pos;
                disii = pos - taxi.begin();
        }

        if(pos != taxi.begin())
        {
            pos--;
            if(i - *pos <= dis){
                dis = i - *pos;
                //cout <<*pos << " " << i << " " << dis << endl;
                disii = pos - taxi.begin();
            }
        }
        ans[disii]++;
    }

    for(int i : ans)cout << i << " ";
    cout << endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("tourist.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++)
    {
        int n,k;
        ll v;
        scanf("%d%d",&n,&k);
        scanf("%lld",&v);

        vector<pair<int, string>>ve;
        string s;

        for(int i = 0; i < n; i++)
        {
            cin >> s;
            ve.push_back(make_pair(i, s));
        }


        ll sz = n*k;
        vector<pair<int, string>>a(sz);

        ll j = 0;

        for(int i = 0; i <= ve.size() ; i++)
        {
            if(i == ve.size())
            {
                i = 0;
            }
            a[j] = ve[i];

            j++;
            if(j == sz)
                break;
        }

        v--;
        v %= n;

        ll lol = ((v)*k);



        ll x = 0;

        vector<pair<int, string>> res;

        for(ll i = lol; ; i++)
        {
            // cout << " "<<a[i] ;

            res.push_back(a[i]);

            x++;
            if(x == k)
                break;
        }


        sort(res.begin(), res.end());

        cout << "Case "<<"#"<<i+1<<":";
        for(int i = 0; i < res.size(); i++)
        {
            cout<<" "<< res[i].second;
        }


        cout << endl;


    }
}


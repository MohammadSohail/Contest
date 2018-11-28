#include<bits/stdc++.h>
using namespace std;

#define N 100005
#define ll long long

//vector<ll>a;
//vector<ll>b;
//vector<ll>c;
ll a[N];
ll b[N];
ll c[N];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       // a.clear(); b.clear(); c.clear();
        ll n=0,h=0,sum=0,res,finalRes=0,mic=100009,sz=0;

        cin>>n>>h;

        for(int i=0;i<n;++i)
        {
            int x;
            cin>>a[i];
           // a.push_back(x);
            sum += a[i];

            b[i] = a[i]*h;

            cout << sum << "  mult "<<sum<< endl;
        }

        for(int i=0;i<n;++i)
        {
            if(b[i] > sum)
            {
                sz++;
                c[i] = b[i];

                cout << c[i] << " great"<< endl;
            }
        }


        for(int j=0;j<sz;j++)
         {
          if(c[j]<mic)
          mic=c[j];

        //cout << mic << endl;
         }

//        res = min(c,c+n);

        res = mic/h;
        cout << res << endl;
        cout << "  hello  " << endl;
    }
}

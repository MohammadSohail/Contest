#include<bits/stdc++.h>
using namespace std;

#define N 100005
#define ll long long
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))


ll a[N];
ll b[N];
ll c[N];
//vector<ll>c(N);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        memset(a,-1,sizeof(a));
        memset(b,-1,sizeof(b));
        memset(c,-1,sizeof(c));
        ll n=0,h=0,sum=0,res=0,finalRes=0,mic=111111,sz=0;
        cin>>n>>h;

        for(int i=0;i<n;++i)
        {
            cin>>a[i];

            sum += a[i];

           // b[i] = a[i]*h;
            b[i] = (a[i]*h);
           // cout << b[i] << "  mult"<< endl;
        }

        for(int i=0;i<n;++i)
        {
            if(b[i] > sum)
            {
                sz++;
                c[i] = b[i];
                //cout << c[i] << endl;
            }
        }
        //cout << sz<<"   sz " << endl;
        sort(c,c+ARRAY_SIZE(c));

                finalRes = c[0]/h;
                cout<<finalRes<<endl;
                return 0;



    }
    return 0;
}


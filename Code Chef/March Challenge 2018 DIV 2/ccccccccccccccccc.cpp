#include<bits/stdc++.h>
using namespace std;

#define N 100005
#define ll long long
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
vector<int>a(N);
vector<int>b(N);
vector<int>c(N);

//ll a[N];
//ll b[N];
//ll c[N];
//vector<ll>c(N);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        ll n=0,h=0,sum=0,res=0,finalRes=0,mic=111111,sz=0;
        cin>>n>>h;

        for(long long  i=0;i<n;++i)
        {
            long long e;
            cin>>e;

    a.push_back(e);
            sum += e;

           // b[i] = a[i]*h;
            b[i] = (a[i]*h);
           // cout << b[i] << "  mult"<< endl;
        }

        for(long long i=0;i<n;++i)
        {
            if(b[i] > sum)
            {
              //  sz++;
                c[i] = b[i];
                //cout << c[i] << endl;
            }
        }
        //cout << sz<<"   sz " << endl;
        sort(c.begin(),c.end());

                finalRes = c[0]/h;
                cout<<finalRes<<endl;
                return 0;



    }
    return 0;
}



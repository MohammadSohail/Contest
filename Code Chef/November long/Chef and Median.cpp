#include<bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mod 10e9+7

int a[101];
int b[2001];
vector<int >v;

int main()
{
    FasterIO;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);

        for(int ii = 0; ii < n; ii++)
        {
            scanf("%d",&a[ii]);
            b[a[ii]]++;
        }

        sort(a,a+n);

        int sz = (1 << n);
        int cnt = 0;

        for(int i = 1; i < sz; i++)
        {
            v.clear();

            for(int j = 0; j < n; j++)
            {
                if(i & (1<<j)){
                    v.push_back(a[j]);
                   // cout << a[j];
                }
            }
           // cout << endl;

           // sort(v.begin(),v.end());

            int x = v.size();
          //  cout << x << " sz" << endl;
            if(x%2 == 1)
            {
                int y = v[((x/2)-1)+1];

                if(b[y] > 0)cnt++;

                // cout << y << " media odd "<<cnt<< endl;
            }
            else
            {
                int z = v[(x-1)/2] + v[x/2];

                int p = z%2;

               // cout << z << " " << p << " elements " << v[(x-1)/2] << " "<<v[x/2] <<endl;

                if(p == 0){
                    if(b[z/2] > 0)
                    cnt++;

              //  cout << z/2 << " median " << cnt << endl;
                }
            }
        }

        printf("%d\n",cnt);


    }
}

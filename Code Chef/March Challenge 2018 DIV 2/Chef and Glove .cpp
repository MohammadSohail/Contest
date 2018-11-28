#include<bits/stdc++.h>
using namespace std;

#define ll long long
//ll sz = 100+5;

//ll l[1000000];
//ll g[1000000];
vector<ll>l;
vector<ll>g;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        l.clear();
        g.clear();
        ll N=0;
        int flag=0,rev=0;
        cin>>N;

        for(ll i=0; i<N; ++i){

            int x;
            cin>>x;
            l.push_back(x);
        }

        for(ll i=0; i<N; ++i){

            int x;
            cin>>x;
            g.push_back(x);
        }

        //reverse(g,g+N);

        for(ll j=0; j<N; ++j){

            if(l[j] <= g[j]){
                flag+=1;
            }
            else
                flag=0;


        }

        reverse(g.begin(),g.end());
        for(ll j=0; j<N; ++j)
        {
            //cout << g[j] << " rev " << endl;
            if(l[j] <= g[j]){
                rev+=1;
            }
            else
                rev =0;
        }

        if(flag == N && rev == N){
            cout << "both" << endl;
        }
        else if(flag == N){
            cout << "front" << endl;
        }
        else if(rev == N){
            cout << "back" << endl;
        }
        else
            cout << "none" << endl;
    }
}


#include<bits/stdc++.h>
using namespace std;



#define N 30
vector<int>g[N];
bool visited[N];
int a[N];
int city[N];
int count1 = 0;

void Clear()
{
    for(int i=0; i<N; ++i){
        g[i].clear();
    }
}

int dfs(int ii)
{
    visited[ii] = true;
    for(int i=0;i<g[ii].size();++i){
        int temp = g[ii][i];
    if(!visited[temp]){
        count1++;
        dfs(temp);
       }

    }
    return count1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){

        Clear();

        memset(visited,false,sizeof(visited));
        int k=0,n=0,m=0,x=0;\
        count1 = 0;
        cin>>k>>n>>m;

        for(int i=1;i<=k;++i){

            cin>>a[i];

        }

        int u,v;
        for(int i=0; i<m; ++i){
        cin>>u>>v;

        g[u].push_back(v);
        }

        for(int i=1; i<=k; ++i)
        {
            visited[a[i]] = true;
            //count1++;
            x= dfs(a[i]);
        }


        cout << x <<"   res" << endl;

    }
}

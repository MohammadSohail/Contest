#include <bits/stdc++.h>
using namespace std;

#define N 1000007
vector <int> graph[N]; //array of vector to store node
bool visited [N];
vector<int>v;
int c = 0,cnt = 0; //marker for nodes
void dfs(int curr)
{
    visited[curr] = true;
    v.push_back(curr);
    cnt++;//marking current node as visited
    for(int i=0;i<graph[curr].size();i++) //looping through all the adjacent nodes
    {
        if(!visited[graph[curr][i]]) //checking if we found any adjacent node is not visited
        {
            dfs(graph[curr][i]); //visiting the not visited node
        }
    }
    //sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        if(((v[i+1]-v[i]) == (v[v.size()-1]-v[i+1])) || ((v[i]-v[i+1])==(v[i+1]-v[v.size()-1]))){
           c++;
           break;
        }
    }
}
void Clear()
{
    for(int i=0;i<N;i++)
        graph[i].clear();
    memset(visited,false,sizeof(visited));
}

int main(){


    freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   int t;
   cin >> t;
   for(int k = 1; k <= t; k++){

        Clear();
        c = 0;
        int n,u,v;
        cin >> n;

        for(int i = 0; i < n-1; i++){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for(int i = 1; i <= n; i++){
            memset(visited,false,sizeof(visited));
            cnt  = 0;
            dfs(i);
        }
        printf("Case %d: %d\n",k,c);


   }

return 0;
}

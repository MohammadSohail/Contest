#include <bits/stdc++.h>
using namespace std;

#define SIZE 11
#define BIG 100000000

vector<int> G[SIZE];
int level[SIZE+5];

int bfs(int source)
{
    queue<int> Q;
    for(int i=0; i<SIZE; i++) level[i] = BIG;

    Q.push(source);
    level[source] = 0;

    while(Q.size()!=0) {
        int u = Q.front();
        Q.pop();

        for(int v = 0; v<G[u].size(); v++) {
            if(level[G[u][v]] == BIG) {
                if(level[u] == 0)level[G[u][v]] = 1;
                else level[G[u][v]] = 0;

                Q.push(G[u][v]);
            }

            if(level[u] == level[G[u][v]])return 10;
        }
    }
    return 20;
}

int main()
{
    int t,x;
   // cin >> t;
    while(cin >> t)
    {
        if(x == 0)break;
        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }

        if(bfs(1) == 10){
            cout << "NOT BICOLORABLE."<<endl;
        }
        else if(bfs(1) == 20) cout << "BICOLORABLE.\n";

    }
}

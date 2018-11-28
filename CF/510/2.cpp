#include<bits/stdc++.h>
using namespace std;

string a[100005];
vector<pair<int,string>>v;

int main()
{
    memset(a,0,sizeof(a));
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        string y;
        cin >> x >> y;
        a[x] = y;
        v.push_back(make_pair(x,y));
    }

    sort(a,a+100005);


}

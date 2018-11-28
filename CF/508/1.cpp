#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(){
    Fast;

    int n,k;
    string s;

    cin>>n>>k;

    cin>>s;

    int ch[26];
    memset(ch,0,sizeof(ch));

    for(int i = 0; i < n; i++){

        ch[s[i]-'A']++;
    }

    int mn=1e9;

    for(int i = 0; i < k; i++){

        mn = min(mn,ch[i]);
    }

    cout<<k*mn<<endl;

	return 0;
}

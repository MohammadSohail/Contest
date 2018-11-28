#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
map<int,int>mmp;

int main()
{
    int n;
    cin >> n;
    while(n--){
            int c= 0,d = 0;

        for(int i = 0; i < 5; i++){
            int x,y;
            cin >> x >> y;

            mp[x]++;
            mmp[y]++;
        }

        for(auto i:mp){
               // cout << i.first << " mp  " << i.second << endl;
            if(i.second >= 3){
                c++;
            }
        }

        for(auto i:mmp){
               // cout << i.first << " " << i.second << endl;
            if(i.second >= 3){
                d++;
            }
        }
        if(c >= 1 && d >= 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

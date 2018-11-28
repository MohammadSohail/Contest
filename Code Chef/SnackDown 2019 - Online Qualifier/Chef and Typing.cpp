#include<bits/stdc++.h>
using namespace std;

vector<string>v;
double a[101];
int ok[101];

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        memset(ok,0,sizeof ok);
        memset(a,0,sizeof a);

        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        for(int i = 0; i < v.size(); i++){
            for(int j = i+1; j < v.size(); j++){
                if(v[i] == v[j]){
                   // ok[i] = true;
                    ok[j] = i;
                }
            }
        }

        double ans = 0.0;

        for(int i = 0; i < v.size(); i++){
                ans = 0.0;

        if(ok[i] != 0){
         for(int  j = 0; j < v[i].size(); j++)
         {

             if(j == 0){
                ans += 0.2;
             }
             else if((v[i][j] == 'd' && v[i][j-1] == 'f') || (v[i][j] == 'f' && v[i][j-1] == 'd')){
                ans += 0.4;
             }
             else if(((v[i][j] == 'd' || v[i][j] == 'f') && v[i][j-1] == 'j')|| (v[i][j] == 'j' && (v[i][j-1] == 'd' || v[i][j-1] == 'f'))){
                ans += 0.2;
             }
             else if(((v[i][j] == 'd' || v[i][j] == 'f') && v[i][j-1] == 'k')|| (v[i][j] == 'k' && (v[i][j-1] == 'd' || v[i][j-1] == 'f'))){
                ans += 0.2;
             }
             else if((v[i][j] == 'k' && v[i][j-1] == 'j')|| (v[i][j] == 'j' && v[i][j-1] == 'k')){
                ans += 0.4;
             }

         }
         a[i] = ans;
        }
        else{
            a[i] = a[ok[i]]/2.0;
        }
        }

        double res = 0.0;
        for(int i = 0; i < 101; i++){
            res += a[i];
        }

        cout << res << endl;
    }
}

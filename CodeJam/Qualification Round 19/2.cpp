#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int cs = 1; cs <= T; cs++){
        int N;
        scanf("%d",&N);
        string s;
        cin >> s;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'E')ans += "S";
            else ans += "E";
        }
        cout << "Case #" << cs << ": " << ans << endl;

    }
    return 0;
}


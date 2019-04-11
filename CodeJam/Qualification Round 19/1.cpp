#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int cs = 1; cs <= T; cs++){

        cout << "Case #" << cs << ": ";

        string s;
        cin >> s;

        int n =  s.size();

        vector<int>def(n,0);

        for(int i = 0; i < n; i++){
            if(s[i] == '4')s[i] = '3',def[i] = 1;
        }
        cout << s << " ";

        int j = 0;
        for(j = 0; def[j] == 0 && j < n; j++);  ///ignoring the zeros of a string. example: 0000000190
        for(;j < n; j++)cout << def[j];
        cout << endl;

    }
    return 0;
}

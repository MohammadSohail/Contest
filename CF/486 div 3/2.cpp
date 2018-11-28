#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    string s[100],ok[100];
    for(int i = 0; i < n; i++){

        cin >> s[i];
    }

    for(int i =0; i < n; i++){


        int k = s[i].size();

        reverse(s[i].begin(),s[i].end());
        string s1 = s[i].substr(0,k/2);
        string s2 = s[i].substr(k/2,k);

        if(s1+s2 == s[i]){
            ok[i] = s1;
            //cout << s << " ";
        }
        else if(s1 == s[i] || s2 == s[i]){
            ok[i] = s1;
        }
    }

    for(int i =0; i < n; i++){
        cout << ok[i] << " ";
    }


}

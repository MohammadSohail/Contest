#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i - 1]){

            cout << 1 << ' ';
        }
        else{

            cout << 0 << ' ';
        }
    }

    if(s[n - 1] == 'a')
        cout << 1 << endl;
    else{
        cout << 0 << endl;
    }
    return 0;
}

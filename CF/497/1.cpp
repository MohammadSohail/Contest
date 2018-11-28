#include<bits/stdc++.h>
using namespace std;

bool vowel(char ch){

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')return true;
    else
        return false;
}

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(vowel(s[i])==false && s[i] != 'n'){
            if(vowel(s[i+1])==false){
                return cout << "no\n",0;
            }
        }
    }

    if(vowel(s.back())==false and s.back()!='n')return cout << "no\n",0;

    cout << "yes" << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int isVowel(char i){
    return i == 'a' || i == 'e' || i == 'i' || i=='o' || i=='u' || i=='y';
}

int main()
{
    int n,a[200];
    cin>>n;
    string s;
    //s[0]='x';
    cin>>s;
    for(int i=0;i<n;++i){
         if(isVowel(s[i]) && isVowel(s[i-1])){
                a[i] = 1;
        }
        else
            a[i] =0;
    }
    for(int i = 0;i<n;++i){
        if(a[i] == 0){
            cout<<s[i];
        }
    }
    cout<<endl;

}

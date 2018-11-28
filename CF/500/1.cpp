#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s1=0,s2=0,c=0;
    cin >> n;
    int a[n+1];
    int b[n+1];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        s1+=a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        s2+=b[i];
    }

    if(s1 == s2){
        printf("Yes\n");
       // return 0;
    }
    else if(s2>s1){
        printf("No\n");
    }
    else{
        for(int i = 0; i < n; i++){
            int f = abs (a[i]-b[i]);
            if(a[i] >= b[i]){
            c++;
            }
        }

        if(c == n && s2 >= (s1-n) && s2 <= s1){
            printf("Yes\n");
        }
        else
            printf("No\n");
    }


    return 0;
}

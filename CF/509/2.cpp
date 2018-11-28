#include <bits/stdc++.h>
using namespace std;
#define lol long long

lol gcd(lol a,lol b){

    if(a%b==0)return b;
    else return gcd(b,a%b);
}

int main()
{
    lol a,b,x,y,c = 0;
    cin>>a>>b>>x>>y;

    lol p = x /gcd(x,y);
    lol q = y /gcd(x,y);
    lol i = 1;
    lol j = 1;

    lol s = a/p;
    lol t = b/q;
    lol ans = min(s,t);


    printf("%lld",ans);

    return 0;

}

#include <bits/stdc++.h>
using namespace std;


long long solve(long long a, long long b, long long x, long long y)
{
    long long countt =0;
    long long tx, ty;
    tx = x;
    ty = y;
    if(tx>a || ty>b)
    {
        return countt;
    }

    while(tx<=a && ty<=b)
    {
        countt++;
        tx +=x;
        ty +=y;
    }
    return countt;
}

int main()
{
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    long long result = solve(a,b,x,y);
    cout<<result;
    return 0;

}

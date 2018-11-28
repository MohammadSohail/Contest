#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}



int main()
{
    int m,arr[1005];
    cin>>m;

    for(int i = 1; i <= m; ++i)
    {
        if(isFibonacci(i)){
            cout<<"O";
        }
        else
            cout<<"o";
    }

    cout<<endl;
}


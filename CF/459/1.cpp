#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}



int main()
{
    int m,arr[m+5];
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

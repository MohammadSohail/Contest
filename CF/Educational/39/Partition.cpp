#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[105];
    int v[105];
    int u[105];
int sum=0;
int sum1=0;

    for(int i=0;i<n;++i){

        cin>>a[i];
        if(a[i]>=0){

            sum+=a[i];
        }
    else

        sum1+=a[i];
}

cout << sum-sum1 << endl;
}


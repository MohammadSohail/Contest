#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sz = n*m;
    int a[n+5][m+5];
    int b[n+5][m+5];

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            a[i][j] =0;
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j] < a[i+1][j] && a[i][j] < a[i][j+1]){

                b[i][j] += 1;
            }
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<b[i][j]<<endl;
        }
    }
}

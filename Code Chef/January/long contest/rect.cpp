#include<bits/stdc++.h>
using namespace std;

int a[10];
int main()
{
    int test;
    for(int i=0; i<4; ++i){
    cin>>a[i];
    }

    sort(a,a+4);

        if(a[0]==a[1] && a[2] == a[3] && a[0] != a[2]){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO" <<endl;
}


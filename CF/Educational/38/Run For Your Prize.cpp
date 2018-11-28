#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int main()
{
    int n,sum1=0,sum2=0,sum3=0,k;
    cin>>n;
    for(int i=1;i <= n;++i){
        cin >> b[i];
        //b[k]++;
       // cout<<b[i] << " hhh" <<endl;
    }

    for(int i=1;i <=n; ++i){
            //sum1 = 0;
        int m = min(b[i] - i,1000000 - i);
        sum2=min(sum1,m);
        cout<<sum1 << "   final" << "  i"<<i<<endl;
    }
    for(int i=1000000;i>1;i--){
        int n;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define N 10005

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int a[N];
    int t[N];

    for(int i=1;i<=n;i++){
        cin>>a[i];

    }
    for(int i=1;i<=n;i++){
        cin>>t[i];

    }
int tot;
    for(int i=1;i<=n;i++){


        if(i>1 && i<(n-k+1)){

            if(t[i]==0){

               t[i]=1;
               tot=i;
              // t[i+k-1]=1;
            }
           //i++;
        }

    }
    for(int j=tot;j<=(tot+k-1);j++){
        if(t[j]==0){
            t[j]=1;
        }
    }

    for(int k=1;k<=n;k++){
        if(t[k]==1){
            sum+=a[k];
        }
    }

    cout<<sum<<endl;
}

#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{

    int t,arr[100001];
    cin>>t;
    while(t--)
    {
    	long long int n,k,i,x,r,pro=1,sum=0,diff;
    	cin>>n>>k;
    	if((k*(k+1)/2)>n)
            cout<<"-1\n";
        else
        {
            x=n/k;
            for(int i = 0; i < k; i++)
            {
                arr[i]=x+i;
                sum = sum + arr[i];
            }
            diff=sum-n;
            r=diff/k;
            for(int i = 0; i < k; i++)arr[i]=arr[i]-r;
            r=diff%k;
            for(int i = 0; i < k; i++)arr[i]=arr[i]-1;

            for(int i = 0; i < k; i++)pro=(pro*arr[i]*(arr[i]-1))%mod;
            cout<<pro<<"\n";
        }

    }
    return 0;
}


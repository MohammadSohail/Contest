#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[5005],flag=0;
    cin >> n;
    for(int k = 1; k <= n; ++k)
    {
        cin >> a[k];
    }

    for(int i=1;i<n-1;++i)
    {
        for(int j = i+1; j < n;++j)
        {
            for(int m = j+1; m <= n;++m)

            {

             if((a[i]+a[j]+a[m]) == (i+j+m))
               {
               cout << "YES" << endl;
               return 0;
               }
            else
                flag = 1;
            }
        }
    }


    if(flag == 1){
        cout << "NO" << endl;
    }




}

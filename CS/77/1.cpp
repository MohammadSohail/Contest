#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n+5],b[n+5],a1=0,a2=0,a3=0,a4=0;

    for(int i = 0; i < n; i++){


        cin >> a[i] >> b[i];

        if ( a[i] > 0 && b[i] > 0 && a1 == 0){
            a1++;
        }
        else if (a[i] < 0 && b[i] > 0 && a2 == 0){
            a2++;
        }
        else if( a[i] < 0 && b[i] < 0 && a3 == 0){
            a3++;
        }
        else if(a[i] > 0 && b[i] < 0 && a4 == 0){
            a4++;
        }

    }

    cout << a1+a2+a3+a4 << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++){

        cin >> a[i];
    }

    if ( n == 1){
        cout << 1 << endl;
        return 0;
    }
    int counter = 0,tot = 0;
    sort(a,a+n);
    for(int i=0; i < n; i++){
        counter = 0;
        for(int j = 0; j < n; j++){

            if(a[i] == a[j]){

                    counter++;

            }
        tot = max(tot,counter);
        }
    }

    cout << tot << endl;
    return 0;
}

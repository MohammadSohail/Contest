#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //vector<int>a;
    long long a[n+1];

    for(int i = 1; i <= n; i++){

       cin >> a[i];

    }

    for(int j = 1; j <= n; j++){

        if(a[j] == 1)a[j] = 1;
        else if(a[j] % 2 == 0){
            a[j] = a[j] -1;
        }
        else a[j] = a[j];
    }

    for(int i =1 ; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

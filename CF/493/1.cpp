#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1],ga[n+1];
   memset(a,0,sizeof(a));
    int go=0;
    int andd=0;
    int cgo=0;

  //  set<int>s;


    for(int i = 0; i < n; i++){

        cin >> a[i];
       // s.insert(a[i]);
    }
   // cout << a[n] << "   hj"<< endl;
    if(n == 1){
        cout << -1 << endl;
        return 0;
    }

    sort(a,a+n);

    for(int i = 0; i < n; i += 2){
        go += a[i];
        a[i] = 0;
    }

    for(int i = 1; i < n; i += 2){

        andd += a[i];//a[i] = 0;
    }

    if(go == andd){
        cout << -1 << endl;
        return 0;
    }
    else
    {
        for(int  i =0; i < n; i++){
            if(a[i] != 0){

                cgo++;

            }
        }

    }
    cout << cgo << endl;

    for(int i =0; i < n; i++){
        if(a[i] != 0){
            cout << a[i] << " ";
        }
    }

    cout << endl;


}

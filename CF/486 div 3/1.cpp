#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;

    set<int>s;

    int a[n+1],arr[n+1],x;
    memset(a,0,sizeof(a));
    a[0]=0;

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;
        s.insert(x);

    }
    //sort(a,a+n);
    for(auto i = s.begin(); i != s.end(); i++){

        cout << *i << " ";
    }



}

#include<bits/stdc++.h>

using namespace std;

int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int f;
    cin >> f;
    while(f--){
    int t,c = 0;
    cin>>t;

     c = __builtin_popcount(t);
    cout << (1ll<<c) << endl;
    }
    return 0;
}

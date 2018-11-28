#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll a,f = 0,c = 1;
        cin >> a;

        for(ll i = 0; i < a; i++){
           // f = a^i;
         //  cout << myXOR(a,i) << endl;
            f = a - myXOR(a,i) - i;
            //cout << f << endl;
            if(f >= 0){
                c++;
            }

        }
        cout << c<< endl;
    }

}

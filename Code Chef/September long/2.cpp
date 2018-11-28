#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

        ll n,m,x,y,a,b;
        scanf("%lld%lld%lld%lld",&n,&m,&x,&y);

        ll p = n-1;
        ll q = m -1;
        ll p1 = n -2;
        ll q1 = m-2;

        if(x > n || y > m){
            cout << "Profik" << endl;
        }
        else{

            if(((p%x == 0) and (q%y==0)) || ((p1%x == 0) and (q1%y==0))){
                cout << "Chefirnemo" << endl;
            }
            else cout << "Profik" << endl;
            }
        }

	return 0;
}

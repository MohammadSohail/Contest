#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

        ll n,m,x,y,a,b;
        scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
       // if(x > n || y > m)printf("Profik\n");

            a = 1, b = 1;

            if(a == n && b == m)cout << "Chefirnemo" << endl;
            else{
                a++,b++;

                if(a == n && b == m)cout << "Chefirnemo" << endl;
                else{
                    a--,b--;
                while(a < n){
                    a += x;
               // cout << a << " a " << n << endl;
                //if(a >= n)break;
                }

                if(a > n)a -= x;

                while(b < m){
                    b += y;
                    //cout << b << " b " << m<< endl;
                 //if(b >= m)break;  // if(b >= m)break;
                }

                if(b > m)b -= y;

            if(a == n && b == m){
                cout << "Chefirnemo" << endl;
            }
            else{
                    a++,b++;
                    if(a == n && b == m){
                    cout <<"Chefirnemo" << endl;
                    }
                    else cout<< "Profik"<< endl;
            }

            }
            }


	}

	return 0;
}

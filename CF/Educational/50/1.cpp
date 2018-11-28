#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n,k;
	cin>>n>>k;

	if(k % n == 0){

		cout<<k/n<<endl;

	}
	else
        cout<<(k/n)+1<<endl;

return 0;
}

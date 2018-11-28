#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
	int n;
	cin >> n;
	if(n == 1) cout << 3;
	else{
		for(int i = 1; i <= n; i++){
			if(i == 1) cout<<1;
			else if(i == n) cout<<2;
			else cout<<0;
		}
	}

	cout<<endl;
    }
	return 0;
}

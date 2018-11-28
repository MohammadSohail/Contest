#include <bits/stdc++.h>
using namespace std;
//vector is preferable
vector<int> Prime;
//int Prime[300000], nPrime;
//1 if not prime, 0 if prime
int mark[5000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n*1.0) + 2;
    //1 is not prime
    mark[1] = 1;
    //evens
    for(i=4; i<=n; i+=2) mark[i] = 1;

    //2 is prime
    Prime.push_back(2);
    //run loops only on odds
    for(i=3; i<=n; i+=2) {
        if(!mark[i]) {
            Prime.push_back(i);

            //if we don't do it, following
            //i*i may overflow
            if(i<=limit) {
                for(j=i*i; j<=n; j += i*2) {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
    sieve(5000000);
    int t;
    cin >> t;

    while(t--){

        int n,c = 0;
        cin >> n;

        for(int i = 2; i <= n; i++){

            if(mark[i] == 0)c++;
        }


    cout << c << endl;
    }

    return 0;
}

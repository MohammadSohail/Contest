#include<bits/stdc++.h>
using namespace std;

template<typename T> string NumberToString ( T Number ) { ostringstream ss; ss << Number; return ss.str(); }

bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;

        string s = NumberToString(a);




    }
}

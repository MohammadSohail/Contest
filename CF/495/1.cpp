#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,counter=2;
    cin >> n >> d;
    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long x = a[0] - d;
    long long x1 = a[0] + d;
//
//   if(x > -1000000000)counter++;
//    if(a[1] - x1 >= d)counter++;
//
    long long y = a[n-1] + d;
//    if(x < 1000000000)counter++;
//
   long long y1 = a[n-1]-d;
//    if(y1 - a[n-2] >= d)counter++;


    for(long long i = 1; i < n-1; i++){

        if(a[1] - x1 >= d)counter++;
        if(y1 - a[n-2] >= d)counter++;

        long long b = a[i] - d;
        if(b - a[i-1] >= d && b != x1 && a[i]-a[i-1] != 0)counter++;



       // cout << b << " b " << counter << endl;

        long long c = a[i] + d;
        if(a[i+1] - c >= d && a[i+1]-a[i] != 0)counter++;

          //cout << c << " c " << counter << endl;
        if(a[i]+d == a[i+1]-d)counter--;
        //cout << "so";

    }

    cout << counter << endl;



}

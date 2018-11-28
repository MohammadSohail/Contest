#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d1,d2,k;
    scanf("%lld %lld %lld",&d1,&d2,&k);

    while(k != 0){

        if(d1 >= d2)d2++;
        else if(d1 < d2)d1++;
        k--;
    }
   // cout << d1 << " "<< d2 << endl;
    long double area = (d1 * d2)/2.0;

    printf("%.6llf",area);
}

#include <bits/stdc++.h>
using namespace std;
#define N 200005
int n,area = 0;
int a[N];

int main()
{

    for(int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a,a+4);

    if( a[0]+a[1] > a[2] || a[1]+a[2] > a[3])
    {
        cout << "TRIANGLE" << endl;
        return 0;
    }

    else if(a[0]+a[1] == a[2] || a[1]+a[2] == a[3])
    {
        cout << "SEGMENT" << endl;

    }

    else
        cout << "IMPOSSIBLE" << endl;



    return 0;
}



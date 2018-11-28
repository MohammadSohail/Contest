#include<bits/stdc++.h>
using namespace std;

double ar(int x1, int y1, int x2, int y2,int x3, int y3){

    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

int main()
{
    int n,d,m;

    cin >> n >> d >> m;

    int a[100],b[100];

    for(int i = 1; i <= m; i++){

        cin >> a[i] >> b[i];
    }

    int x1 = 0,y1 = d,x2 = d,y2 = 0,x3 = n,y3 = (n-d),x4 = (n-d),y4 = n;

    for(int i=1; i<=m; i++){

        double Amain = ar(x1, y1, x2, y2, x3, y3) + ar(x1, y1, x4, y4, x3, y3);
        double A1 = ar(a[i], b[i], x1, y1, x2, y2);
        double A2 = ar(a[i], b[i], x2, y2, x3, y3);
        double A3 = ar(a[i], b[i], x3, y3, x4, y4);
        double A4 = ar(a[i], b[i], x1, y1, x4, y4);

        if(Amain == (A1 + A2 + A3 + A4)){

            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;

}

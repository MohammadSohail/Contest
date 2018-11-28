#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    if(n == m){
        cout << "=" << endl;
        return 0;
    }

     double t1 = log(n)/n;
     double t2 = log(m)/m;
   cout << t1 << " " << t2 << endl;


    if(t1 > t2) cout<< ">" << endl;
    else if(t1 == t2){
        cout << "=" << endl;
        }
    else cout << "<" << endl;


}

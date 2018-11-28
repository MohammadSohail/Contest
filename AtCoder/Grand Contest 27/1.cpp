#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int n,x,tot = 0,c = 0;
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        v.push_back(y);
        tot += y;
    }

    sort(v.begin(),v.end());

   for(int i = 0; i < v.size(); i++){

        if(v[i] <= x){
            c++;
            x -= v[i];
            if(i == v.size()-1 && x > 0)c--;
        }
   }

    cout << c << endl;

}

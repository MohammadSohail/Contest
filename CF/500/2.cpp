#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,x,n1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> n1;
        v.push_back(n1);
    }

    for(int i = v.size()-1; i >= 0; i--){
        for(int j = v.size()-1; j > 0; j--){
            if(i == j)j--;

        }
    }

}

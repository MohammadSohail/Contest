#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[100],b[100],c[100],d[100],m[100],n[100];
    int x,y;
    cin>>x>>y;
    getchar();
    for(int i=0;i<x;i++){
        getline((cin,a[i])(cin,b[i]));
        m[i] = a[i] + b[i];
        getline(cin,m[i]);
        cout << a[i]<<" f  "<<b[i] << endl;
    }
    getchar();
    for(int j=0; j<y; ++j){
        getline(cin,c[j]),getline(cin,d[j]);
    }

    for(int k =0 ; k < y ; ++k){
            cout << d[k] << endl;
        if(d[k] == b[k]) {
            cout << c[k] << d[k] <<" #"<<a[k] << endl;
        }
    }

}

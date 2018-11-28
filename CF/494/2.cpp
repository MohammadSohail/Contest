#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    cin >> a >> b >> x;

    int l = a+b;
    string s;



    for( int i = 0; i < l; i++){


        if(a > 0){
            s[i] = '0';
            a--;
        }
        else if(b > 0){
            s[i] = '1';
            b--;
        }
}


    sort(s.begin(),s.end());

    do {
       cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


//    for(int i = 0; i < l; i++){
//        cout << s[i];
//    }
    cout << endl;
}


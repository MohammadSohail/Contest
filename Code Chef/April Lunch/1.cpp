#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,counter1=0,counter2=0;
        cin >> a;
        if(a % 10 == 0){
                cout << 0 << endl;
        }
        else if(a % 10 != 0){
            if(a%10==5){
               // counter1++;
                int b = a * 2;
                if(b%10 == 0){
                    counter2++;
                }
                cout << counter2 << endl;
               // break;
            }
            else
                cout << -1 << endl;
        }


    }
}

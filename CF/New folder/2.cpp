#include<bits/stdc++.h>
using namespace std;

int main()
{
    string m;
    int n,x=0,y=0,count =0;
    cin>>n>>m;
    for(int i=0;i<=n;++i){

            if(x == y && ((m[i]=='R'&&m[i-1]=='R') || (m[i]=='U'&&m[i-1]=='U'))){
                count++;
                // cout << " sohail EQ " << endl;

            }
        if(m[i] == 'U'){
            x+=0;
            y+=1;
             //cout << " sohail U" <<x<<y<< endl;

        }
        else if(m[i] == 'R'){
            x+=1;
            y+=0;
            // cout << " sohail R" <<x<<y<< endl;

        }
    //cout << " sohail " << endl;
    }
    cout << count << endl;
}


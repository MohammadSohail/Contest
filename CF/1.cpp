#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ara[6];
    memset(ara,0,sizeof(ara));
    //string color[] = {"purple","green","blue","orange","red","yellow"};
    string gem[6] = {"Power","Time","Space","Soul","Reality","Mind"};
    string inp[n+1];
   // map<string,string>mp;
   // map<string,string>mp1;


//    for(int i = 0; i < 6; i++){
//
//         mp.insert(pair<string,string>(color[i],gem[i]));
//
//    }

    for(int i = 0; i < n; i++){

        string s;
        cin >> s;
        if (s == "purple"){
            ara[0]++;
        }
        else if (s == "green"){
            ara[1]++;
        }
        else if (s == "blue"){
            ara[2]++;
        }
        else if (s == "orange"){
            ara[3]++;
        }
        else if (s == "red"){
            ara[4]++;
        }
        else if (s == "yellow"){
            ara[5]++;
        }


    }

    cout << 6-n << endl;

    for(int i = 0; i < 6; i++){

        if(ara[i] == 0){
            cout << gem[i] << endl;
        }
    }



}

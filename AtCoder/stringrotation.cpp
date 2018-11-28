#include<bits/stdc++.h>
using namespace std;
int main(){

  string a,b;
  cin >> a >> b;
    bool ans = false;
 for(int i = 0; i < a.size(); i++){
    if(a == b){
        ans = true;
        break;
    }
    a = a.back()+a.substr(0,a.size()-1);
    //cout << a << endl;
 }
 if(ans)cout << "yes" << endl;
 else cout << "No" << endl;


}

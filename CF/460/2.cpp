#include<bits/stdc++.h>
using namespace std;

int ok(int i){
   int res = 0;
   while(i)
   {
      // res = i/10;
       res+= i % 10;
       i/=10;
   }
   return res;
}

int main(){

    int a,count = 0;
    cin >> a;
    for(int i = 1; ; ++i){
        if(ok(i)==10){
            count++;
        }
        if(count == a)
    {
        cout << i << endl;
        return 0;
    }
    }
}

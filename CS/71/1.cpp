#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   for(int i=0;i<s.size();++i)
   {
       if(s[i] == 'A' && s[i+1] == 'A'){
        s[i] ='A'-33;
       }
   }
   for(int i=0;i<s.size();++i)
   {
       if(s[i]!=' '){
        cout<<s[i];
       }
   }
   cout<<endl;
  // cout << s << endl;
}

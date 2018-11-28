#include<bits/stdc++.h>
using namespace std;

vector<int>v;
set<int>s;
//int arr[100000001];

int main()
{
    int cases;
    cin>>cases;

    while(cases--)
    {
        //cout << count << "  j" << endl;
       // memset(v,0,sizeof(v));
       //std::fill(v.begin(),v.end(),0);
       v.clear();
       s.clear();
        //std::fill(s.begin(),s.end(),0);
        int n,res=0,r=0,a=0,count=0;
        cin>>n;

        for(int i=0; i<n; ++i)
        {
            cin>>a;
            v.push_back(a);
            s.insert(a);

        }

        int uniqueNumbers = 0;
        uniqueNumbers=s.size();

        res = n - uniqueNumbers;

        cout << res << endl;



       // cout << r << endl;



    }
}

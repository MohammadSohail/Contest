#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int sz;
int f[45001];
vector<int>v;
// Computes sum all sub-array
int SubArraySum(int arr[], int n,int ans)
{
    int result = 0;

    // Pick starting point
    for (int i=0; i <n; i++)
    {
      //  result = 0;
        // Pick ending point
        for (int j=i; j<n; j++)
        {
           result  =0;
           v.clear();
            // sum subarray between current
            // starting and ending points
            for (int k=i; k<=j; k++){
                result += arr[k];
                v.push_back(arr[k]);
               // cout << arr[k] << " " << endl;
                if(__gcd(result,ans)>1){
                    cout << "Yes" << endl;
                for(int i = 0; i < v.size(); i++){
                    cout << v[i] << " ";
                }
                cout << endl;
                for(int i = 0; i < n; i++){
                    cout << f[i] << " ";
                }
                cout << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

}

int main(){
    Fast;

    cin >> sz;

    int a[sz];

    int ans = 0;
    for(int i = 0; i < sz; i++){
        a[i] = i+1;
        f[i] = i+1;
        //cout << a[i] << " ";
        ans += (i+1);

    }
   // cout << endl;

    SubArraySum(a,sz,ans);


}

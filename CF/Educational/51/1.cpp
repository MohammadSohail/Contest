#include <bits/stdc++.h>
#define ABS(x)                                      ((x)<0?-(x):(x))
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MOD(x,y)                                     (((x)*(y))%mod)
#define MIN(a,b)                                   ((a)<(b)?(a):(b))
#define MAX(a,b)                                   ((a)>(b)?(a):(b))
#define NUMDIGIT(x,y)              (((ll)(log10((x))/log10((y))))+1)
#define ODD(x)                                  (((x)&1)==0?(0):(1))
#define Unique(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define valid(i,j)         (i >= 0 && j>= 0 && i < 1001 && j < 1001)
#define check(i, j)         ((i >= 0 && i < R) && (j >= 0 && j < C))

using namespace std;
typedef long long               ll;
const double            eps = 1e-9;
typedef unsigned long long     ull;
typedef         pair < ll, ll> pll;
typedef        pair < int,int> pii;
typedef             vector<pll> pv;
typedef              vector<ll> vl;
typedef            vector <int> vi;
const int         inf = (int) 10e9;
const ll          INF = (ll) 10e18;
const double PI = 2 * acos ( 0.0 );

int dx[] = {+1,-1,0,0};
int dy[] = {0,0,+1,-1};
int hx[] = {+1,-1,-1,+1,-2,-2,+2,+2};
int hy[] = {+2,+2,-2,-2,+1,-1,+1,-1};
int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

template < typename T> inline T LCM(T x, T y) {T g = GCD(x,y); return x*(y/g); }
template < typename T> inline T GCD(T a, T b) {a=ABS(a), b=ABS(b); return !b ? a : GCD(b,a%b); }
template < typename T> inline T power(T b,T p) { T res = 1, x = b; while ( p ) { if ( p & 1 ) res = ( res * x ); x = ( x * x ); p >>= 1;}return res;}
template < typename T> inline T bigmod (T b, T p, T m) { T res = 1 % m, x = b % m; while ( p ) { if ( p & 1 ) res = ( res * x ) % m; x = ( x * x ) % m; p >>= 1; }return res; }

int main(){

    FasterIO;
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   int t;
   cin >> t;

   while(t--){

        string s;
        cin >> s;
        int l = 0,u = 0,d = 0,l2=0,u2=0,d2=0;

        string s1 = s.substr(0,s.size()/2);
        cout << s1 << endl;
        string s2 = s.substr(s.size()/2,s.size());
        cout << s2 << endl;

        for(int i = 0; i < s.size(); i++){

            if(s[i] >= 'A' && s[i] <= 'Z'){
                u++;
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                l++;
            }
            else
                d++;
        }
       // cout << u << l << d << endl;

        if(u >= 1 && l >= 1 && d >= 1){
            cout << s << endl;
            //return 0;
        }
        else if(d >= 1 && u == 0 && l ==0){
            s[s.size()-2] = 'a';
            s[s.size()-1] = 'A';
            cout << s << endl;
        }
        else{


            for(int i = 0; i < s2.size(); i++){

            if(s2[i] >= 'A' && s2[i] <= 'Z'){
                u2++;
            }
            else if(s2[i] >= 'a' && s2[i] <= 'z'){
                l2++;
            }
            else
                d2++;
        }

           for(int i = s.size()-1; i >= s.size()/2; i--){

                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = tolower(s[i]);
                    l2++;
                }
                else if(s[i] >= 'a' && s[i] <= 'z'){

                    s[i] = toupper(s[i]);
                    u2++;
                }
                else{
                    s[i] = '4';
                    d2++;
                }
           }

        if(l2>0 && u2>0 && d2>0)cout << s << endl;

        }
   }

return 0;
}

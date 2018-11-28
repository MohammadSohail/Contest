#include <bits/stdc++.h>

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())

#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))


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
template < typename T> string NumberToString ( T Number ) { ostringstream ss; ss << Number; return ss.str(); }
ll toint(string ss){ll inss = 0; for(int i = 0;i<ss.size();i++){inss = (inss*10)+((int)(ss[i]-'0'));}return inss;}
//////// BIG MOD //////
long long bigMod(ll a,ll b,ll c)
{
    if(b==0)return 1%c;
    if(b&1)return (a*bigMod(a,b-1,c))%c;
    else{
        ll y = bigMod(a,b/2,c);
        return (y*y)%c;
    }
}

// Template ends here

#define N 200005

int main(){

    FasterIO;
    //fRead("input.txt");
    //fWrite("output.txt");
    ll n,q,k;
    cin >> n >> q >> k;

    vector<ll>v,x;

    string s;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> s;
    ll c = 0;

    for(ll i = 0; i < s.size(); i++)
    {
        x.clear();
       // cout << v.size() << " v" << endl;

        if(s[i] == '!'){
            rotate(v.rbegin(),v.rbegin()+1,v.rend());
//            cout << "!!!!!!!!!!!!!" << endl;
//            for(int n:v){
//                cout << n << " ";
//            }
//            cout << endl;
        }
        else{
            for(ll j = 0; j <= v.size()+1; j++){

                if(j == v.size()+1){
                       // cout <<j << " " << v.size() << " sz" << endl;
                    sort(x.begin(),x.end());
//                    for(int y:x){
//                        cout << y << " ";
//                    }
//                    cout << endl;
                    cout << x[x.size()-1] <<endl;
                }
                else if(j == v.size()){

                    if(v[v.size()-1] == 1){

                        if(c <= k)x.push_back(c);
                        else x.push_back(k);

                        c = 0;
                    }

                }
                else if(v[j] == 1){

                    c++;

                }
                else{

                    if(c <= k)x.push_back(c);
                    else x.push_back(k);
                   // cout << c << " c"<< endl;
                    c = 0;
                }
            }
        }
    }

    cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" << endl;

    return 0;
}



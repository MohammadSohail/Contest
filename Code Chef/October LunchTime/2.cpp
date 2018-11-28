#include <bits/stdc++.h>
#define N 2001

//#define fRead(x)        freopen(x,"r",stdin)
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
#define check(i, j)         ((i >= 0 && i < n) && (j >= 0 && j < m))

using namespace std;

int a[N][N];
int n,m;


int main()
{

    //FasterIO;
    freopen("input.txt","r",stdin);
    //fWrite("output.txt");

    int t;
    scanf("%d",&t);

    while(t--)
    {

        int x,y,c = 0;
        scanf("%d %d", &n,&m);
        char ch;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {

                cin >> ch;

                if(ch == '.')
                {
                    a[i][j] = 1;
                    x = i,y = j;
                    // cout << i << " " << j << endl;
                }
                else a[i][j] = 0;
            }

        }



        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {

                int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int                 fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};

                if(a[i][j] != 0 && a[i+1][j] != 0 && a[i][j+1] != 0 && a[i+1][j+1] != 0 && a[i-1][j] != 0 && a[i][j-1] != 0 && a[i+1][j-1] != 0 && a[i-1][j+1] != 0 && a[i-1][j-1] != 0 )
                {
                            a[i][j] = 5;
                            a[i+1][j] = 5;
                            a[i][j+1] = 5;
                            a[i+1][j+1] = 5;
                            a[i-1][j] = 5;
                             a[i][j-1] = 5; a[i+1][j-1] = 5; a[i-1][j-1] = 5; a[i-1][j+1] = 5;

                }
            }
        }

        for(int  i = 0; i< n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == 1)
                {
                    c = 1;
                    break;
                }
            }
        }


        if(c == 1)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }

    return 0;
}


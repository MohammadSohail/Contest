#include<bits/stdc++.h>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--)
    {
        int N;
        double res=0.000000000;
        cin>>N;

        for(int i=0; i<N; ++i)
        {
            double p,q,d;
            cin>>p>>q>>d;

            double a=0,b=0;

            a =  p+((p*(d/100)));
            b = (a - ((a*(d/100))));
            res += ((p - b)*q);


        }


        std::cout << std::fixed;
    std::cout << std::setprecision(9);
       cout << (double)res << endl;
       // printf("%lf",res);
    }
}

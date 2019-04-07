#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int cs = 1; cs <= T; cs++){
        int N;
        scanf("%d",&N);
        string sN = to_string(N);
        int c = 0;
        for(int i = 0; i < sN.size(); i++){
            if(sN[i] == '4')c++;
        }
        if(c == sN.size()){
            int x = std::stoi(sN);
            printf("Case #%d: %d %d\n", cs, x/2, x/2);
        }
        else{
            for(int i = 0; i < sN.size(); i++){
                if(sN[i] == '4'){
                    sN[i] = '1';
                }
            }
            int x = std::stoi(sN);
            printf("Case #%d: %d %d\n", cs, x, (N - x));
        }

    }
    return 0;
}

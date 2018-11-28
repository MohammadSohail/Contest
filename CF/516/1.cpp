#include<bits/stdc++.h>
using namespace std;

#define min2(x, y) ((x <= y) ? x : y)
#define max2(x, y) ((x > y) ? x : y)
#define min3(x, y, z) ((x <= y && x <= z) ? x : (y <= x && y <= z) ? y : z)
#define max3(x, y, z) -(min3(-x, -y, -z))
#define mid3(x, y, z) (max2(min2(x, y), min2(max2(x, y), z)))


int main(){

    int a,b,c,x,y,z;
    cin >> a >> b >> c;

    x = min3(a,b,c);
    y = mid3(a,b,c);
    z = max3(a,b,c);

    if(x + y > z){
        cout << 0 << endl;
    }
    else{
        cout << z-(x + y)+1 << endl;
    }

    return 0;
}

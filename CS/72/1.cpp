#include<bits/stdc++.h>
using namespace std;

#define ll long long
int reversedNumber(int n){
    int reversedNumber=0;
    int remainder=0;
 while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
        //cout << reversedNumber << "   loop" << endl;
    }
    return reversedNumber;
    }

int main()
{
    int n=0;
   // ll reversedNumber=0;
    //ll  remainder=0;
    cin>>n;


    if(n < reversedNumber(n))
    {

    cout << 1 << endl;

    }
    else
    {

    cout << 0 << endl;

    }


    return 0;

}

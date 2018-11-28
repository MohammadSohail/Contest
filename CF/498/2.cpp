#include<bits/stdc++.h>
using namespace std;

#define mx 20024

int main()
{
    int n,k;
    cin >> n >> k;
    int a[mx],b[mx],mxVal[k],mark[mx],tot = 0,mxx=0;


    for(int i = 0; i <n; i++){
            cin >> a[i];
            b[i] = a[i];
            mxx = max(mxx,a[i]);
    }

    if(k == 1){

       cout << mxx << endl;
       cout << n << endl;
       return 0;
    }

    sort(a,a+n,greater<int>());
    //reverse(a,a+k);
  int ja = 0,t = k,sum = 0,counter = 0;
//
//    for(int i = n-1; i>=0; i--){
//
//        if(t == 0)break;
//        mxVal[ja] = a[i];
//        sum += mxVal[ja];
//    t--;
//    ja++;
//    }
//    for(int i = 0; i < k; i++){
//        cout << mxVal[i] << " ";
//    }

    for(int i = 0; i < k; i++){
       // mark[a[i]]++;
        sum += a[i];
      // cout << a[i] << " mrk "<< endl;
    }

    vector<int>v;

//                        5 4 2 6 5 1 9 2
    for(int i = 0; i < k; i++){

            counter = 0;
        //cout << mxVal[i] << endl;

        for(int j = n-1; j >= 0; j--){


            if(b[j]){

                counter++;
              //cout <<a[i]<<" "<<b[j] <<" "<<counter << endl;

                        if(a[i] == b[j]){

                            if(i == k-1 && j > 0){

                                counter += j;
                            }
                            v.push_back(counter);
                            counter = 0;
                            b[j] = 0;

                            break;


                        }
              b[j] = 0;
            }
        }
    }

  //  if(counter)v[v.size()-1] += counter;


    /////////
   //5 4 2 6 5 1 9 2

//    for(int i = 0; i < n; i++){
//
//        int x = b[i];
//        counter++;
//
//        if(mark[x] != 0){
//
//            if(counter != 0){
//                v.push_back(counter);
//                counter = 0;
//                mark[x]--;
//            }
//        }
//    }
//    if(counter)(v[v.size()-1]) += counter;
    cout << sum << endl;

    for(int i = 0; i < v.size(); i++){

        cout << v[i] << " ";
    }
    cout << endl;


}

#include<bits/stdc++.h>
using namespace std;

#define N 1007
#define valid(nx,ny) ((nx>=0 && nx<2) && (ny>=0 && ny<n))
vector<int>v[N];

int n;
bool visited[N][N];


int fx[]={+1, 0, 0};
int fy[]={ 0,+1,-1};

int main()
{

    int mm = 0;
    cin >> n;

    int arr[N][N];
    for(int i =0 ; i < 2; i++){

        for(int j = 0; j < n; j++){

            cin >> arr[i][j];
            v.push_back(arr[i][j]);
        }
    }

    for(int i =0 ; i < 2; i++){

        for(int j = 0; j < n; j++){

            if(!visited[i][j]){

                visited[i][j] = true;

               cout<< v[i][j].size();

                for(int k = 0; k < 3; k++){

                    int x = i+fx[k];
                    int y = j+fy[k];

                    if(!visited[x][y] && valid(x,y)){

                     int a = min(arr[x][y],545656655656);


                    }
                }
            }
        }
    }


}

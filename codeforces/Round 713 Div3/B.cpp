#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
    int n;
    cin >>n;
    char arr[n][n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            if(arr[i][j] == '*'){
                v.push_back({i,j});
            }
        }
    }

    if(v[0].first!=v[1].first && v[0].second!=v[1].second){
    arr[v[0].first][v[1].second]='*';
    arr[v[1].first][v[0].second]='*';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    continue;
    }

    else{
        if(v[0].first==v[1].first){
            if(v[0].first>0){
                arr[v[0].first-1][v[0].second]='*';
                arr[v[1].first-1][v[1].second]='*';
            }
            else{
                arr[v[0].first+1][v[0].second]='*';
                arr[v[1].first+1][v[1].second]='*';
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
            continue;
        }
        if(v[0].second==v[1].second){
            if(v[0].second>0){
                arr[v[0].first][v[0].second-1]='*';
                arr[v[1].first][v[1].second-1]='*';
            }
            else{
                arr[v[0].first][v[0].second+1]='*';
                arr[v[1].first][v[1].second+1]='*';
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
            continue;
        }
    }
}
}
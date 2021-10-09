#include<bits/stdc++.h>
using namespace std;
//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_e
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int h,w;
cin>>h>>w;
vector<string>arr(h);
f(i,h) cin>>arr[i];
vector<vector<int>>nos(h,vector<int>(w,0));
int dx[4] = {-1,1,0,0};
int dy[4] ={0,0,-1,1};
int count = 0;
f(i,h){
    f(j,w){
        if(arr[i][j] == '.'){
            count++;
            nos[i][j]++;
            for(int k=0;k<4;k++){
                if(i + dx[k] >= 0 && j + dy[k] >=0 && 
                    i + dx[k] < w && j + dy[k] < h &&
                    arr[i+dx[k]][j+dy[k]] == '.') {
                        nos[i][j]++;
                    }
            }
        }
    }
}

for(int masks=0;masks<(1<<count);masks++){
    
}

}

}
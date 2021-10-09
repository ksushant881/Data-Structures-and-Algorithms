#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;

int N,M;
void solve(){

}

bool notEmptyRow(vector<vector<int>>arr,int row){
    for(int i=0;i<M;i++){
        if(arr[row][i] == 0) return false;
    }
    return true;
}

bool notEmptyCol(vector<vector<int>>arr,int col){
    for(int i=0;i<N;i++){
        if(arr[i][col] == 0) return false;
    }
    return true;
}

void print(vector<vector<int>>arr){
    f(i,N){
        f(j,M){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

int n,m;
cin>>n>>m;
N=n;
M=m;
vector<vector<int>>arr(n,vector<int>(m));


f(i,n){
    f(j,m){
        cin>>arr[i][j];
    }
}

vector<string>ans;
f(i,n){
    while(notEmptyRow(arr,i)){
        string s = "row "+to_string(i+1);
        ans.push_back(s);
        f(j,m) arr[i][j]-=1;
    }
}

f(i,m){
    while(notEmptyCol(arr,i)){
        string s="col " + to_string(i+1);
        ans.push_back(s);
        f(j,n) arr[j][i]-=1;
    }
}

f(i,n){
    f(j,m){
        if(arr[i][j] != 0){
            cout<<-1;
            return 0;
        }
    }
}

cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x<<endl;
}

}

}
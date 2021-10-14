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
string solve(char a,char b){
    if((a == 'G' && b == 'C') || (a=='C' && b=='P') ||(a=='P' && b=='G')){
        return "p1";
    }
    else if(a == b) return "draw";
    else return "p2";
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n,m;
cin>>n>>m;
map<int,vector<int>>mp;
// int arr[2*n+1][m+1];
vector<vector<int>>arr(2*n+1,vector<int>(m+1));
for(int i=1;i<=2*n;i++){
    arr[i][0]=i;
}
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=m;j++){
        char num;
        cin>>num;
        arr[i][j]=num;
        // mp[i+1].push_back(num);
    }
}
vector<vector<int>>win;
vector<vector<int>>lose;

int round=1;
while(round!=m){
    for(int i=1;i<=2*n;i+=2){
        string str = solve(arr[i][round],arr[i+1][round]);
        if(str == "p1"){
            win.push_back(arr[i]);
            lose.push_back(arr[i+1]);
        }
        else if(str == "p2"){
            win.push_back(arr[i+1]);
            lose.push_back(arr[i]);
        }
        else{
            
        }
    }

    round++;
}



}

}
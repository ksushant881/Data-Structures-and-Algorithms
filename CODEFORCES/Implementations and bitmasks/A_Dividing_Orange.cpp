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
void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

int n,k;
cin>>n>>k;
vector<vector<int>>arr(k);
vector<bool>used(n*k+1,false);

f(i,k) {
    int x;
    cin>>x;
    arr[i].push_back(x);
    used[arr[i][0]]=true;
}

// for(int i=0;i<k;i++){
//     for(auto x:arr[i]){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

int num=1;
for(int i=0;i<k;i++){
    for(num=1;num<=n*k;num++){
        if(used[num] == false){
            arr[i].push_back(num);
            used[num] = true;
            if(arr[i].size() == n) break;
        }
    }
}
for(int i=0;i<k;i++){
    for(auto x:arr[i]){
        cout<<x<<" ";
    }
    cout<<endl;
}


}

}
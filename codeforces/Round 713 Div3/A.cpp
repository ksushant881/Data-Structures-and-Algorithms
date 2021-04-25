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
cin >> n;
int arr[n];
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    cin >> arr[i];
}

for(int i=0;i<n;i++){
    mp[arr[i]] = i;
}

auto fi = mp.begin();
auto se = ++mp.begin();

// cout<<fi->first<<" "<<fi->second<<endl;
// cout<<se->first<<" "<<se->second<<endl;



for(int i=0;i<n;i++){
    if(i!=fi->second && i!=se->second){
        if(arr[i] == fi->first){
            cout<<se->second+1<<endl;
            break;
        }
        else if(arr[i] == se->first){
            cout<<fi->second+1<<endl;
            break;
        }
    }
}
 
 
}
}
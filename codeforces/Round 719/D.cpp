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
ll n;
cin >>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
ll count = 0;
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
   mp[arr[i]]=i;
}

for(auto it1=mp.begin();it1!=mp.end();it1++){
    
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second > it1->second && it->first-it1->first==it->second-it1->second)
            count++;
    }
}

// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[j]-arr[i] == j-i)
//             count++;
//     }
// }
cout<<count<<endl;



}
}
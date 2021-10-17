#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio
int n;
cin>>n;
int sum=0;
int arr[n];
map<int,vector<int>>mp;
f(i,n){
    int x;
    cin>>x;
    mp[x].push_back(i+1);
    sum+=x;
}
int div = sum/(n/2);

for(int i=0;i<n/2;i++){
    auto it=mp.begin();
    int a=it->first;
    int b=div-a;
    int aa=it->second[it->second.size()-1];
    it->second.pop_back();
    int bb=mp[b][mp[b].size()-1];
    mp[b].pop_back();
    if(mp[a].size()==0){
        mp.erase(a);
    }
    if(mp[b].size()==0){
        mp.erase(b);
    }
    cout<<aa<<" "<<bb<<endl;
}

}
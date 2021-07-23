#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
map<int,vector<int>>mp;
for(int i=0;i<n;i++){
    mp[v[i]].push_back(i);
}
// for(auto x:mp){
//     cout<<x.first<<" - ";
//     for(auto y:x.second){
//         cout<<y<<" ";
//     }
//     cout<<endl;
// }
vector<int>res(n,0);
vector<int>count(k+1,0);
int temp1=0;
//vector<int>temp;
stack<int>temp;
for(auto x:mp){
    if(x.second.size()>=k){
        for(int i=1;i<=k;i++){
            count[i]++;
        }
        for(int i=0;i<x.second.size() && i<k;i++){
            res[x.second[i]]=i+1;
        }
    }
    else{
        temp1+=x.second.size();
        for(int i =0;i<x.second.size();i++){
            temp.push(x.second[i]);
        }
    }
    if(temp1>=k){
        for(int i=1;i<=k;i++){
            count[i]++;
        }
        int i=0;
        while(!temp.empty() && i<k){
            int curr=temp.top();
            res[curr]=i+1;
            temp.pop();
            i++;
        }
        temp1-=k;
    }
}
for(int i=0;i<=count.size();i++){
    cout<<count[i]<<" ";
}
cout<<endl;
for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
}
cout<<endl;

}
}
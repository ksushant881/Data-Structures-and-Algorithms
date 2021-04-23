#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int computePre(vector<pair<int,int>>v,int n){
    int k=0;
    vector<int>pre(n);
    pre[0]=v[0].first;
    for(int i=1;i<n;i++){
    pre[i]=v[i].first + pre[i-1];
    }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i].first < 0){
            k=i;
            break;
        }
    }
    return k;
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n;
cin >> n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin >> v[i].first;
}
for(int i=0;i<n;i++){
    cin >> v[i].second;
}

int k=0;

vector<int>temp;
for(auto it=v.begin();it!=v.end();it++){
    if(it->second == 0){
        temp.push_back(it->first);
    }
}
sort(temp.begin(),temp.end());
int inx;
inx = 0;
for(auto it=v.end()-1;it>=v.begin();it--){
    if(it->second == 0){
        it->first = temp[inx];
        inx++;
    }
}
for(auto it=v.begin();it!=v.end();it++){
    cout<<it->first<<" ";
}
cout<<"\n";



}
}
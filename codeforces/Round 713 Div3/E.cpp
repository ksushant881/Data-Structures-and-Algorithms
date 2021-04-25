#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int summ(vector<int>temp){
    int s=0;
    for(int i=0;i<temp.size();i++){
        s+=temp[i];
    }
    return s;
}

vector<int> solve3(vector<int>&v,int i,int n,vector<int>temp,int length,int curr,int sum){
    if(i==n){return temp;}
    solve3(v,i+1,n,temp,length,curr,sum);
    temp.push_back(v[i]);
    curr+=v[i];
    if(temp.size()>length || curr>sum) return temp;
    solve3(v,i+1,n,temp,length,curr,sum);
}
vector<int>ext;
bool flag = false;
void solve(vector<int>&v,int i,int n,vector<vector<int>>&res,vector<int>temp,int length,int curr,int sum){
    //if(flag){return;}
    if(curr==sum && temp.size()==length) {res.push_back(temp); return;}
    if(i==n){ return;}
    solve(v,i+1,n,res,temp,length,curr,sum);
    temp.push_back(v[i]);
    curr+=v[i];
    if(temp.size()>length || curr>sum) return;
    solve(v,i+1,n,res,temp,length,curr,sum);
}

vector<int>solve2(vector<vector<int>>&res,int length,int req){
    for(int i=0;i<res.size();i++){
        if(res[i].size()==length && summ(res[i])==req){
            return res[i];
        }
    }
}


int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n,l,r,s;
cin >> n >> l >> r >> s;
vector<int>v(n+1);
unordered_set<int>st;
for(int i=1;i<n+1;i++){
    v[i]=i;
    st.insert(i);
}
int  Ulim=0;
int Llim=0;
int tem = n;
int te=1;
for(int i=l;i<=r;i++){
    Llim+=te;
    Ulim+=tem;
    tem--;
    te++;
}
if(s>Ulim || s<Llim){
cout<<"-1"<<"\n";
continue;
}

vector<vector<int>>res;
vector<int>temp;
solve(v,1,n+1,res,temp,r-l+1,0,s);
vector<int>sub;
//sub=solve2(res,r-l+1,s);
sub=res[0];

//sub=solve3(v,1,n+1,temp,r-l+1,0,s);
// for(int i=0;i<sub.size();i++){
//     cout<<sub[i]<<" ";
// }
fill(v.begin(),v.end(),-1);
for(int i=l;i<=r;i++){
    v[i]=sub[i-l];
    st.erase(sub[i-l]);
}

for(int i=1;i<n+1;i++){
    auto it=st.begin();
    if(v[i] == -1){
        v[i]=*it;
        st.erase(*it);
    }
}

for(int i=1;i<n+1;i++){
    cout<<v[i]<<" ";
}
cout<<"\n";

}
}
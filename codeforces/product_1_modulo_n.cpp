#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
int size=0;
void sub(vector<ll>v,int n,int inx,vector<vector<ll>>&res,vector<ll>temp,ll pro){
    if(inx == n){
        if(pro%n == 1 && temp.size() > size){
            res.push_back(temp);
            size = temp.size();
        }
        return;
    }
    sub(v,n,inx+1,res,temp,pro);
    temp.push_back(v[inx]);
    pro*=v[inx];
    pro = pro%mod;
    sub(v,n,inx+1,res,temp,pro);
}

void findMax(vector<vector<ll>>&res,int n){
    ll global=0;
    int index = -1;
    for(int i=0;i<res.size();i++){
            if(res[i].size() > global){
                global = res[i].size();
                index = i;
            }
    }
    //cout<<res.size();
    cout<<global<<"\n";
    for(int i=0;i<res[index].size();i++){
        cout<<res[index][i]<<" ";
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

ll n;
cin >> n;
vector<ll>nums(n);
for(int i=0;i<n;i++){
    nums[i] = i+1;
}
vector<ll>temp;
vector<vector<ll>>res;
int inx = 0;
sub(nums,n,inx,res,temp,1);
findMax(res,n);
}
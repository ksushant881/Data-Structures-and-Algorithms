#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

bool isSorted(vector<int>&nums){
    int n=nums.size();
    if(n==1) return true;
    for(int i=1;i<n;i++){
        if(nums[i-1] > nums[i]) return false;
    }
    return true;
}


int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n;
cin>>n;
vector<int>arr(n+1);
vector<int>b(n+1);
for(int i=1;i<=n;i++) {
    cin>>arr[i];
    b[i]=arr[i];
}
int steps=0;
vector<pair<pair<int,int>,int>>ans;
for(int i=1;i<=n-1;i++){
    int minimum=arr[i];
    int indexMin=i;
    for(int j=i+1;j<=n;j++){
        if(arr[j] < minimum){
            minimum=arr[j];
            indexMin=j;
        }
    }
    if(i!=indexMin){
        ans.push_back({{i,indexMin},indexMin-i});
        for(int j=indexMin;j>i;j--){
            arr[j]=arr[j-1];
        }
        arr[i]=minimum;
    }
}
cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x.first.first<<" "<<x.first.second <<" "<<x.second<<endl;
}

}

}
#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define endl "\n"
#define mod 1000000007
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
ll n;
cin >> n;
vector<ll>nums(n);
for(int i=0;i<n;i++){
    cin >> nums[i];
}
int count=0;
bool flag = false;
vector<ll>temp(n);
temp=nums;
sort(temp.begin(),temp.end());
pair<int,int>p;
for(int i=0;i<n;i++){
    if(nums[i] != temp[i]){
        p.first = i;
    }
    if(nums[i] == temp[i] && i!=0 && nums[i-1] != temp[i-1]){
        p.second = i;
    }
}
for(int i=p.first;i<p.second;i++){
    if()
}
}
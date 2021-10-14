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

int main(){
fastio
int n,k;
cin>>n>>k;
int arr[n];
f(i,n) cin>>arr[i];
int i=0;
map<int,int>mp;
map<int,vector<int>>res;
int left=0,right=0;
int ans=INT_MAX;
while(right < n){
    if(mp.size() < k){
        mp[arr[right]]++;
        right++;
    }
    else{
        if(mp.size() == k && ans > right-left+1){
            res[right-left+1]={left,right};
            ans=right-left+1;
        }
        while(1){
            mp[arr[left]]--;
            if(mp[arr[left]] == 0) mp.erase(arr[left]);
            if(mp.size() < k) break;
            left++;
            if(mp.size() == k && ans > right-left+1){
                res[right-left+1]={left,right};
                ans=right-left+1;
            }
        }
    }
}
map<int,vector<int>>::iterator it=res.begin();
cout<<it->second[0]+1<<" "<<it->second[1]+1;
return 0;

}


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:   
    #define ll long long
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vector<ll>freq1(32,0),freq2(32,0);
        for(ll i=0;i<arr1.size();i++){
            for(ll j=0;j<32;j++){
                if(arr1[i] & (1<<j)) freq1[j]++;
            }
        }
        for(ll i=0;i<arr2.size();i++){
            for(ll j=0;j<32;j++){
                if(arr2[i] & (1<<j)) freq2[j]++;
            }
        }
        vector<ll>fin(32,0);
        for(ll i=0;i<32;i++){
            if(freq1[i]!=0 && freq2[i]!=0) fin[i]=freq1[i]*freq2[i];
        }
        // for(auto x:fin){
        //     cout<<x<<" ";
        // }
        int ans=0;
        for(ll i=0;i<32;i++){
            if(fin[i]&1){
                ans+=(1<<i);
            }
        }
        return ans;
    }
};

ll main(){

}
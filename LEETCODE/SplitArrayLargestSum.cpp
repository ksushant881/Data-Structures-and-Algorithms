#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int sum=0;
        int ans;
        int n=nums.size();
        int low=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            low=max(low,nums[i]);
        }
        int high=sum;
        cout<<high<<" "<<low<<endl;
        while(high>=low){
            int mid = (high+low)/2;
            int cnt=1;
            int s=0;
            for(int i=0;i<n;i++){
                s+=nums[i];
                if(s>mid){
                    cnt++;
                    s=nums[i];
                }
            }
            if(cnt<=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            cout<<mid<<" "<<ans<<" here"<<endl;
        }
        return ans;
    }
};

int main(){

}
#include<bits/stdc++.h>
using namespace std;

    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int  mid=0;
        
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
                //mid++;
            }
            else 
                mid++;
            
        }
    
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }

int main(){
    vector<int>v={2,0,1,2,1,2,1,1,1,2,0,0,1,2,0,1,2,1,1,2,1,0,2,1,1,2,1,2,0,1,2,0,0,1,1,2,0};
    sortColors(v);
    return 0;
}
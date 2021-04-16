#include<bits/stdc++.h>
using namespace std;

//naive approach
int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int global=INT32_MIN;
        for(int i=0;i<n;i++){
            int local=1;
            for(int j=i;j<n;j++){
                local*=nums[j];
                cout<<local<<endl;
                if(local>global)
                    global=local;
            }
        }
        return global;
    }

//efficient approach
//difficult to come up
    int maxProduct2(vector<int>& nums) {
        int n=nums.size();
        int minProd=nums[0];
        int maxProd=nums[0];
        int ans=nums[0];
        int choice1,choice2;
        for(int i=1;i<n;i++){
            choice1=minProd*nums[i];
            choice2=maxProd*nums[i];
            minProd=min(nums[i],min(choice1,choice2));
            maxProd=max(nums[i],max(choice2,choice1));
            ans=max(ans,maxProd);
        }
        return ans;
    }

int main(){
    vector<int>v={10,-2,3,20,4};
    cout<<maxProduct2(v);
}
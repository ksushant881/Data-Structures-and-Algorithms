#include<bits/stdc++.h>
using namespace std;

void product(vector<int>arr,int start,int end,vector<int>&v){
    if(start==arr.size() || end == arr.size())
        return;
    else if(start>end)
        product(arr,0,end+1,v);
    else{
        
        int p=1;
        for (int i = start; i < end; i++)
            p*=arr[i];
        p*=arr[end];
        v.push_back(p);
        product(arr,start+1,end,v);
    }
      
}
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        vector<int>pros;
    
    product(nums,0,0,pros);
    int count=0;
        for(int x:pros){
            //cout<<x<<" ";
            if(x<k)
                count++;
        }
        return count;
    }

int main(){
    vector<int>v;
    v={10,5,2,6};
    int k=100;
    cout<<numSubarrayProductLessThanK(v,k);
}
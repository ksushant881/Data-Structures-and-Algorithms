#include<bits/stdc++.h>
using namespace std;

vector<int>smaller(vector<int>nums){
    stack<int>st;
    int n=nums.size();
    vector<int>res(n,-1);
    st.push(nums[n-1]);
    
    for(int i=n-2;i>=0;i--){
        if(nums[i]>st.top()){
            res[i]=st.top();
            continue;
        }
        else{
            st.push(nums[i]);
        }
    }
    return res;
}

int main(){
vector<int>arr={1,15,10,8,6,12,9,18};
    int n=8;
    vector<int>v;
    
    for(auto x:smaller(arr))
        cout<<x<<" ";
}
#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
// Find the largest index l > k such that nums[k] < nums[l].
// Swap nums[k] and nums[l].
// Reverse the sub-array nums[k + 1:]

void print(vector<int>v){
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
}

//incorrect solution
void generate(vector<int>nums,int n,int i,vector<vector<int>>&res){
    if(i==n){
        res.push_back(nums);
        return;
    }
    for(int j=i;j<n;j++){
        swap(nums[i],nums[j]);
        generate(nums,n,i+1,res);
        swap(nums[i],nums[j]);
    }
}

void nextPermutation(vector<int>& v){
    vector<vector<int>>res;
    generate(v,v.size(),0,res);
    sort(res.begin(),res.end());
    int n=res.size();
    for(int i=0;i<res.size();i++){
        if(res[i]==v){
            while(res[i%n]==v)
               i=(i+1)%n;
            v=res[i];
        break;
    }
}
}

//correct solution
void nextPermutation(vector<int>& nums) {
    int n=nums.size();
    int i=-1;
    int k=-1;
    for(k=n-1;k>0;k--){
        if(nums[k-1] < nums[k])
            break;
    }
    k--;
    if(k==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    
    for(i=n-1;i>k;i--){
        if(nums[k] < nums[i]){
            break;
        }
    }
    swap(nums[k],nums[i]);
    sort(nums.begin()+k+1,nums.end());
}

//1 line solution
void nextPermutation2(vector<int>& nums) {
        next_permutation(begin(nums),end(nums));
    }

int main(){
fastio
vector<int>v={1,2,3,7,6};
// nextPermutation(v);
// for(int x:v)
//     cout<<x<<" ";
nextPermutation(v);

}

/*
12367
12376
12637
12673
12736
12763
*/
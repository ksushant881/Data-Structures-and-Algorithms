#include<bits/stdc++.h>
using namespace std;


void generate(int arr[],int n,int i,vector<int>temp,vector<vector<int>>&subsets){
    if(i == n){
        subsets.push_back(temp);
        return;
    }
    generate(arr,n,i+1,temp,subsets);
    temp.push_back(arr[i]);
    generate(arr,n,i+1,temp,subsets);
}

int subSum(int arr[],int n,int target){
    vector<int>temp;
    vector<vector<int>>subsets;
    int local=0;
    int count=0;
    generate(arr,5,0,temp,subsets);
    for(int i=0;i<subsets.size();i++){
        local=0;
        for(int j=0;j<subsets[i].size();j++){
            local+=subsets[i][j];
        }
        if(local == target)
            count++;
    }
    return count;    
}

int quick(int arr[],int n,int target){
    if(target == 0)
        return 1;
    if(n==0 && target!=0)
        return 0;
    return quick(arr,n-1,target) + quick(arr,n-1,target-arr[n-1]);
}

//DP solution
int quicker(int arr[],int n,int target){
    int dp[n+1][target+1];
    for(int i=1;i<target+1;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=target;i++){
        for(int j=1;j<=n;j++){
            if()
        }
    }
}

int main(){
    int arr[]={10,5,2,3,6};
    int target=8;
    cout<<quick(arr,5,target); 
}
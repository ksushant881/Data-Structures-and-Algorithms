#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[],int weight[],int n,int cap){
    if(n==0 || cap==0)
        return 0;
   
    if(weight[n-1]>cap)
        return knapsack(value,weight,n-1,cap);
    return max(value[n-1]+knapsack(value,weight,n-1,cap-weight[n-1]),knapsack(value,weight,n-1,cap));
}

//DP solution
int knapsack(int value[],int weight[],int n,int cap){
    int dp[n+1][cap+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int i=0;i<=cap;i++)
        dp[0][cap]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cap;j++){
            
        }

    }
    


}

int main(){
    int v[]={10,40,30,50};
    int w[]={5,4,6,3};
    int cap=10;
    cout<<knapsack(v,w,4,cap);
}
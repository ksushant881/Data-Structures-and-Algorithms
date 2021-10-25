#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
        int n=w.size();
        int sum=0;
        int low=-1;
        for(int i=0;i<n;i++){
            low=max(low,w[i]);
            sum+=w[i];
        }
        int high=sum;
        int ans;
        while(high >= low){
            int mid = (high+low)/2;
            int cnt=1;
            int s=0;
            for(int i=0;i<n;i++){
                s+=w[i];
                if(s > mid){
                    cnt++;
                    s=w[i];
                }
            }
            if(cnt <= d){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

//dp solution using allocate minimum number of pages problem form dp
// gives TLE
class Solution {
public:
    int sum(vector<int>arr,int i, int j){
        int s=0;
        for(int k=i;k<=j;k++){
            s+=arr[k];
        }
        return s;
    }

    int shipWithind(vector<int>& arr, int k) {
        int n=arr.size();
        int dp[k+1][n+1];
        for(int i=0;i<=k;i++){
            for(int j=0;j<=n;j++){
                dp[i][j] = 0;
            }
        }
   
        for(int i=1;i<=n;i++){
            dp[1][i] = dp[1][i-1] + arr[i-1];
        }
 
        for(int j=1;j<=k;j++){
            dp[j][1] = arr[0];
        }
        for(int i=2;i<=k;i++){
            for(int j=2;j<=n;j++){
                int res=INT_MAX;
                for(int p=0;p<j;p++){
                    res=min(res,max(dp[i-1][p],sum(arr,p,j-1)));
                }
                dp[i][j]=res;
            }
        }
        return dp[k][n];
    }
};

int main(){

}
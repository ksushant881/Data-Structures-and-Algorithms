// #include<bits/stdc++.h>
// using namespace std;
// #define pi 3.1415926536
// #define ll long long int
 
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);

// int n=3;
// vector<ll>nums(n);
// nums = {1,3,10};

// ll dp[n][n];
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         dp[i][j]=1;
//     }
// }

// for(int i=0;i<n;i++){
//     dp[i][i]=nums[i];
// }
// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         dp[i][j] = dp[i][j-1]&nums[j];
//     }
// }

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }
#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int

 void binary(int n){
     vector<int>v;
     while(n!=0){
         int temp=n%2;
         v.push_back(temp);
         n=n/2;
     }
     for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
 }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int n=3;
binary(n);
int k=~n;
cout<<endl;
binary(k);

}

#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
ll n,q;
cin >> n >> q;
vector<ll>nums(n);

for(int i=0;i<n;i++){
    cin >> nums[i];
    
}
ll dp[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        dp[i][j]=1;
    }
}
ll orRes=0;
for(int i=0;i<n;i++){
    dp[i][i]=nums[i];
    orRes = orRes|dp[i][i];
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        dp[i][j] = dp[i][j-1]&nums[j];
        orRes = orRes|dp[i][j];
    }
}

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
// }

cout<<orRes<<"\n";
for(int j=0;j<q;j++){
    ll x,v;
    cin >> x >> v;
    nums[x] = v;
    int orr=0;
    for(int i=x;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            dp[i][j] = dp[i][j-1]&nums[j];
        }
    }
    


}

}
}

//011 &  100 = 000
//011 | 000 = 011

//1100 & 0111 = 0100
//1000 | 0100 = 1100


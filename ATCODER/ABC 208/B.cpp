#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



void init(vector<int>&nums){
    nums[1]=1;
    for(int i=2;i<=10;i++){
        nums[i] = nums[i-1]*i;
    }
}



int main(){
fastio
vector<int>nums(11);
init(nums);
int tc=1;
// cin >> tc;
for(int casess=0;casess<tc;casess++){

int p;
cin>>p;
int res=0;
for(int i=10;i>=1;i--){
    for(int j=1;;j++){
        if(nums[i]*j > p){
            p = p - ((j-1)*nums[i]);
            res += (j-1);
            break;
        }
    }
}
cout<<res<<endl;
 
}
}
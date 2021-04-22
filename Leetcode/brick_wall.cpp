#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int leastBricks(vector<vector<int>>& wall) {
    int n=wall.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<wall[i].size();j++){
            wall[i][j]=wall[i][j]+wall[i][j-1];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<wall[i].size();j++){
    //         cout<<wall[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    map<int,int>mp;
    int global=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<wall[i].size()-1;j++){
            mp[wall[i][j]]++;
        }
    }
    int ans;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second >= it->first){
            global=it->second;
            ans = it->first;
        }
    }
    cout<<ans<<" "<<global<<endl;
    return n-global;
}

int main(){
fastio
vector<vector<int>>v={
    {{1,2,2,1},
        {3,1,2},
        {1,3,2},
        {2,4},
        {3,1,2},
        {1,3,1,1}}
};
cout<<leastBricks(v);

}
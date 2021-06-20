#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){
    int n;
    cin >> n;
    int arr[n][n];
    int rem[n+1];
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        rem[i+1]=i;
        cin >> arr[i][i];
    }
        bool vis[n][n];
      memset(vis,0,sizeof(vis));
      map<int,pair<int,int>>mp;
      //mp[i] denotes on which cell i am currently on in the ith region
      for(int i=0;i<n;i++){
            vis[i][i]=1;
            mp[i]={i,i};
      }
      set<int>st;
      for(int i=0;i<n;i++){
            st.insert(i);
      }
      while(!st.empty()){
            vector<int>temp;
            //iterate on all incomplete regions
            for(auto i:st){
                  //cell we are on currently
                  int x=mp[i].first;
                  int y=mp[i].second;
                  //if this region is complete
                  if(rem[arr[x][y]]==0){
                        temp.push_back(i);
                        continue;
                  }
                  //otherwise if the current region is not complete then
                  int tot=0;
                  //count empty adjacent cells
                  if(x-1>=0 and (x-1)>=y and !vis[x-1][y]){
                        tot++;
                  }
                  if(x+1<n and (x+1)>=y and !vis[x+1][y]){
                        tot++;
                  }
                  if(y-1>=0 and (y-1)<=x and !vis[x][y-1]){
                        tot++;
                  }
                  if(y+1<n and (y+1)<=x and !vis[x][y+1]){
                        tot++;
                  }
                  //if there is only 1 adjacent cell remaining then
                  if(tot==1){
                        //update mp[i] i.e, cell we are currently on in the region i
                        if(x-1>=0 and (x-1)>=y and !vis[x-1][y]){
                              mp[i]={x-1,y};
                        }
                        if(x+1<n and (x+1)>=y and !vis[x+1][y]){
                              mp[i]={x+1,y};
                        }
                        if(y-1>=0 and (y-1)<=x and !vis[x][y-1]){
                              mp[i]={x,y-1};
                        }
                        if(y+1<n and (y+1)<=x and !vis[x][y+1]){
                              mp[i]={x,y+1};
                        }
                        //subtract 1 from rem[] as 1 we have grown the region by 1 cell
                        rem[arr[i][i]]-=1;
                        //mark the current cell visited
                        vis[mp[i].first][mp[i].second]=1;
                        //and fill the array with the value
                        arr[mp[i].first][mp[i].second]=arr[i][i];
                  }
            }
            //erase all such regions which are complete
            for(auto z:temp){
                  st.erase(z);
            }
      }
      //print the answer
      for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }
}
}

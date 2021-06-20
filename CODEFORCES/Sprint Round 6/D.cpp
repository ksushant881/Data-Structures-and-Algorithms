#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    void bfs(vector<vector<char>>&arr,int i,int j,int &k){
        if(k==0){
            return;
        }
        arr[i][j]='X';
        k--;
        if(i!=0 && arr[i-1][j]=='.'){
            bfs(arr,i-1,j,k);
        }
        if(i!=arr.size()-1 && arr[i+1][j]=='.'){
            bfs(arr,i+1,j,k);
        }
        if(j!=0 && arr[i][j-1]=='.'){
            bfs(arr,i,j-1,k);
        }
        if(j!=arr[0].size() && arr[i][j+1]=='.'){
            bfs(arr,i,j+1,k);
        }
    }

    int dx[]={1,0,-1,0};
    int dy[]={0,1,0,-1};
    int n,m,k;
    char a[505][505];
    void dfs(int i, int j) {
        if(k == 0) return;
        int x = ((i + 1 < n && a[i + 1][j] == '.') + (i - 1 >= 0 && a[i - 1][j] == '.') + (j + 1 < m && a[i][j + 1] == '.') + (j - 1 >= 0 && a[i][j - 1] == '.'));
        if(x != 1) return ;
        a[i][j] = 'X';
        k --;
        for(int z = 0; z < 4 && k > 0; z ++) {
            if(i + dx[z] >= 0 && i + dx[z] < n && j + dy[z] && j + dy[z] >= 0 && a[i + dx[z]][j + dy[z]] == '.') {
                dfs(i + dx[z], j + dy[z]);
            }
        }
    }

int main(){
fastio
 

cin>>n>>m>>k;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}


for(int i=0;i<n;i++){
    for(int j=0;j<m && k;j++){
        if(a[i][j]=='.'){
            dfs(i,j);
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j];
    }
    cout<<"\n";
}
}



//
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("Ofast")
#pragma GCC optimization ("unroll-loops")   
// #pragma GCC optimize ("trapv") 
 
 
#include<bits/stdc++.h>  
#define ll long long  
#define ff first  
#define ss second  
#define mkp make_pair 
#define pb push_back  
#define pf push_front  
#define inf 1000000000
#define maxn 300005
#define mod  2147483647 
#define mod1 1000000009 
  
using namespace std;  
 
 
void solve(){   
  int n,m,k; 
 
  cin>>n>>m>>k;  
 
 
  int dx[4]={1,0,-1,0}; 
  int dy[4]={0,-1,0,1};
 
 
  char arr[n][m];  
 
  int free=0; 
 
  pair<int,int>st{-1,-1}; 
   bool vis[n][m]; 
 
  for(int i=0;i<n;++i){  
      for(int j=0;j<m;++j){  
        cin>>arr[i][j]; 
        vis[i][j]=false;
        if(arr[i][j]=='.') {  
           if(st.ff=-1){  
            st.ff=i; 
            st.ss=j;
           }
           ++free; 
         }
      }
  } 
 
 
  
 
 
 
  queue<pair<int,int>>q; 
 
  q.push(st);  
 
  vis[st.ff][st.ss]=1; 
  arr[st.ff][st.ss]='?'; 
 
  int cnt=free-k;  
 
  --cnt
;
 
  while(!q.empty()){  
 
      pair<int,int>p=q.front();  
 
      q.pop();  
 
 
      if(cnt<=0) 
          break;  
 
      for(int i=0;i<4;++i){  
          int x=p.ff+dx[i]; 
          int y=p.ss+dy[i]; 
 
          if(x>=0&&x<n&&y>=0&&y<m&&!vis[x][y]&&arr[x][y]=='.'&&cnt>=1){  
            q.push(mkp(x,y)); 
            vis[x][y]=1; 
            arr[x][y]='?'; 
            --cnt;
          }
      }
 
 
  } 
 
 
  for(int i=0;i<n;++i){ 
     for(int j=0;j<m;++j){  
       if(arr[i][j]=='?') 
          arr[i][j]='.'; 
       else if(arr[i][j]=='.') 
          arr[i][j]='X'; 
 
       cout<<arr[i][j];
     }  
 
     cout<<'\n';
  }
 
 
 
}
 
 
int main(){ 
 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);   
  
 
 
  #ifndef ONLINE_JUDGE  
 
       freopen("input.txt","r",stdin);  
       freopen("output.txt","w",stdout); 
 
  #endif 
        
        // int t; 
        // cin>>t; 
        // while(t--) 
        solve(); 
 
     
return 0;  
 
}    
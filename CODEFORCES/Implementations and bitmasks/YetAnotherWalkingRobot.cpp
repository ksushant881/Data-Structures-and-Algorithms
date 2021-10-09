#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(string s,int n){
    map<pair<int,int>,int>mp; //store we visited this point on
    // grid when we were at this index of the string
    mp[{0,0}] = 0;
    int x=0,y=0;
    int lengthOfSubstring = INT_MAX;
    // string options="LRUD";
    // int dx[4] = {-1,1,0,0};
    // int dy[4] = {0,0,-1,1};
    map<char,int>dx={
        {'L',-1},
        {'R',1},
        {'U',0},
        {'D',0}
    };
    map<char,int>dy={
        {'L',0},
        {'R',0},
        {'U',-1},
        {'D',1}
    };
    pair<int,int>ans;
    f(i,n){
        if(mp.find({x + dx[s[i]], y + dy[s[i]]}) != mp.end()){
            int currLength = i - mp[{x + dx[s[i]] , y + dy[s[i]]}] + 1;
            if(currLength < lengthOfSubstring){
                ans = {mp[{x + dx[s[i]],y + dy[s[i]]}] + 1, i + 1};
                lengthOfSubstring = min(lengthOfSubstring,currLength);
            }
        }
        mp[{x + dx[s[i]],y + dy[s[i]]}] = i+1;
        x += dx[s[i]];
        y += dy[s[i]];
    }
    if(lengthOfSubstring != INT_MAX) cout<<ans.first<<" "<<ans.second<<endl;
    else cout<<-1<<endl;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n;
cin>>n;
string s;
cin>>s;
solve(s,n);

}

}



// void solve(){
//     int n;
//  vector<vector<int>>arr(n,vector<int>(n));
//     string s;
//     map<char,int> dx={{'L',-1},{'R',1},0,0};
//     int dy[]={0,0,-1,1};
//     arr[0][0]=54;
//     int x=0,y=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i] == 'L'){
//             arr[x+dx[0]][y+dy[0]]=i;
//         }
//         else if(s[i] == 'R'){
            
//         }
//     }
// }
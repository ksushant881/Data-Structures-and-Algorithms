#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    // vector<int>cnt(200005,0);
    stack<pair<int,int>>st;
    int currBalls,currStreak,currBallOfStreak;
    f(i,n){
        int a;
        cin>>a;
        if(i==0){
            currStreak=1;
            currBalls=1;
            currBallOfStreak=a;
            cout<<1<<"\n";
            continue;
        }
        // cout<<currBallOfStreak<<" "<<currStreak<<" "<<currBalls<<endl;
        currBalls++;

        if(currBallOfStreak==a){
            currStreak++;
            if(currStreak==currBallOfStreak){
                currBalls-=(currStreak);
                // st.pop();
                if(st.empty()) {
                    cout<<currBalls<<"\n";
                    currBallOfStreak=-1;
                    currStreak=0;
                    continue;
                }
                currBallOfStreak=st.top().second;
                currStreak=st.top().first;
                st.pop();
            }
        }
        else{
            st.push({currStreak,currBallOfStreak});
            currStreak=1;
            currBallOfStreak=a;
        }
        cout<<currBalls<<"\n";

    }
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}
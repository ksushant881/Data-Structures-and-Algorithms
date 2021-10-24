#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int help(string s,char c){
    int high=s.length()-1;
    int low=0;
    int cnt=0;
    while(high > low){
        if(s[high] == s[low]){
            high--;
            low++;
            continue;
        }
        if(s[low]==c){
            low++;
            cnt++;
            continue;
        }
        if(s[high]==c){
            high--;
            cnt++;
            continue;
        }
        return -1;
    }
    return cnt;
}

void solve(){
int n;
cin>>n;
string s;
cin>>s;
int high=n-1,low=0;
while(high>low && s[high]==s[low]){
    high--;
    low++;
}
if(low >= high){
    cout<<0<<endl;
    return;
}
int ans1=help(s.substr(low,high-low+1),s[low]);
int ans2=help(s.substr(low,high-low+1),s[high]);
if(ans1==-1 && ans2==-1){
    cout<<-1<<endl;
}
else if(ans1==-1 && ans2!=-1){
    cout<<ans2<<endl;
}
else if(ans1!=-1 && ans2==-1){
    cout<<ans1<<endl;
}
else{
    cout<<min(ans1,ans2)<<endl;
}

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}
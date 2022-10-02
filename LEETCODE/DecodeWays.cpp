#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int cache[101];

int dp(string s,int pos){
    if(pos == s.length()){
        return 1;
   }
   if(pos > s.length()) return 0;

   if(cache[pos] != -1) return cache[pos];
    //single digit
    int ans = 0;
    int curr1 = stoi(s.substr(pos,1));
    if(curr1 != 0) ans = dp(s,pos+1);

    //two digits
    string twoDigits = s.substr(pos,2);
    int curr2 = stoi(twoDigits);
    if(curr2 > 9 and curr2 <= 26) ans+= dp(s,pos+2);

    cache[pos] = ans;
    return ans;

}

int main(){
    memset(cache,-1,sizeof(cache));
    cout<<dp("111111111111111111111111111111111111111111111",0);
}
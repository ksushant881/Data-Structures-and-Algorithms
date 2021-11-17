#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

// void solve(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     int high=n,low=0;
//     int ans=INT_MAX;
//     vector<bool>arr(26,false);
//     while(high>=low){
//         int mid=(high-low)/2+low;
//         set<char>st1;
//         vector<int>arr(26,0);
//         f(i,mid){
//             arr[s[i]-'a']++;
//             st1.insert(s[i]);
//         }
//         for(int i=mid;i<n;i++){
//             for(int j=i-mid;j<=i;j++){

//             }            
            
//         }
//     }
// }

void solve1(){
    string s;
    cin>>s;
    int n=s.length();
    int ans=s.length();
    for(int i='a';i<='z';i++){
        int distance=0,tempAns=0;
        for(int j=0;j<n;j++){
            distance++;
            if(s[j]==i){
                tempAns=max(tempAns,distance);
                distance=0;
            }
        }
        distance++;
        tempAns=max(tempAns,distance);
        if(tempAns!=0) ans=min(ans,tempAns);
        
    }
    cout<<ans;
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve1();
}
}
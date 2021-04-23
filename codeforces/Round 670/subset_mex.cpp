#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int>s1(101,0);
    for(int i=0;i<n;i++){
        s1[v[i]]++;
    }
    int ans = 0;
    int count = 0;
    for(int i=0;i<101;i++){
        if(s1[i] == 0){
            ans+=i;
            break;
        }
    }
    for(int i=0;i<101;i++){
        s1[i]--;
        if(s1[i] <= 0){
            ans+=i;
            break;
        }
    }
    cout << ans << endl;

}
}
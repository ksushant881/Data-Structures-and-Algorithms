#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n;
cin >> n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count = 0;
for(int i=0;i<n-1;i++){
    int m=min(arr[i],arr[i+1]);
    int ma=max(arr[i],arr[i+1]);
    int next = 2*m;
    while(next < ma){
        count++;
        next=2*next;
    }
}
cout<<count<<endl;
}
}
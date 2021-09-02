#include<bits/stdc++.h>
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
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int jumps=0;
int curr;
priority_queue<int>pq;
int i;

for(i=0;i<n;i++){
    pq.push(v[i]);
}

if(pq.top() != v[0]){
    cout<<-1<<endl;
    continue;
}

curr=v[n-1];
for(i=n-2;i>=0;i--){
    if(v[i] > curr){
        jumps++;
        curr=v[i];
    }
}
cout<<jumps<<endl;
}

}
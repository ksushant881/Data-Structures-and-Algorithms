#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
vector<bool>visited(3000,false);

for(int i=0;i<n;i++){
    int c;
    cin >> c;
    visited[c-1]=true;
}
bool found=false;
for(int i=0;i<n;i++){
    if(visited[i] ==false){
        cout<<i+1<<endl;
        found=true;
        break;
    }
}
if(!found)
    cout<<n+1;

}
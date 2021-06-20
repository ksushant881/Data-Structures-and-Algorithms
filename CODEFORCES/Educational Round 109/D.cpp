#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
fastio
 
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int cost=0;
for(int i=0;i<n;i++){
    if(v[i]==1){
        v[i]=2;
        int left,right;
        left=-1;
        right=-1;
        for(int j=i;j<n;j++){
            if(v[j]==0){
                right=j;
                break;
            }
        }
        for(int j=i;j>=0;j--){
            if(v[j]==0){
                left=j;
                break;
            }
        }
        
        if(left!=-1 && right!=-1){
            int res;
            res=(abs(right-i) >= abs(left-i))?left:right;
            v[res]=3;
            cost+=(abs(i-res));
        }
        else if(left==-1 && right!=-1){
            v[right]=3;
            cost+=(abs(i-right));
        }
        else if(right==-1 && left!=-1){
            v[left]=3;
            cost+=(abs(i-left));
        }
    }
}
cout<<cost<<"\n";
}
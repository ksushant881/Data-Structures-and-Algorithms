#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll solve(ll n , ll k){
    if(k == 0)
        return n;
    return (solve(n-1,k-1) + 2)%n;
}

int josephus2(int n,int k){
    vector<bool>arr(n+1,false);
    int i=1;
    while(k){
        if(arr[i] == true){
            while(arr[i]==true){
                if(i==n)
                    i=0;
                i++;
            }
        }
        else{
            arr[i] = true;
            if(i==n-1)
                i=-1;
            if(i==n)
                i=0;
            i+=2;
            k--;
        }
        
    }
    return i;
}

int main(){
fastio

ll tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n,k;
cin >> n >> k;
cout<<josephus2(n,k)-1<<endl;
}
}
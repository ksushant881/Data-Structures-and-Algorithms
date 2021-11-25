#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool arr[1001];
void solve(){
    int n;
    cin>>n;
    if(isPal(n)){
        cout<<2<<endl;
        cout<<n<<" "<<0<<endl;
        return;
    }

}

bool isPal(int n){
    string s="";
    while(n){
        int k=n%2;
        s+=to_string(k);
        n=n/2;
    }
    int m=s.length();
    int i=0,j=m-1;
    while(1){
        if(i>=j) return true;
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

void precompute(){
    memset(arr,false,1001);
    f(i,1001){
        if(isPal(i)) arr[i] = true;
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
#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[100005];
void reverse(int start,int end){
    int i=start,j=end;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


void solve(){
    int k,n;
    cin>>k>>n;
    f(i,100005) arr[i]=i+1;
    f(i,n)cin>>arr[i];
    sort(arr,arr+n);
    int start=0,end=arr[0];
    for(int i=1;i<n;i++){
        end=arr[i];
        reverse(start,end);
        start=end+1;
    }
    f(i,n)cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}
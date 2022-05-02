#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m,int a[],int b[]) {
    sort(a,a+n);
    sort(b,b+m);
   
    int i=0,j=0;
    int cnt=0;
    while(i<n) {
        if(a[i] >= b[j]){
            cout<<a[i]<<" "<<b[j]<<endl;
            cnt++;
            i++;
            j++;
            continue;
        }
        i++;
    }
    return cnt;
}

int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    cout<<solve(n,m,a,b);

}
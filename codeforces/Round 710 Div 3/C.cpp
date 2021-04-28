#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int fun(string a,string b){
    int n=a.length();
    int m=b.length();
    int arr[n+1][m+1];
    for(int i=0;i<n+1;i++){
        arr[i][0]=0;
    }
    for(int i=0;i<m+1;i++){
        arr[0][i]=0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    int res=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            res=max(res,arr[i][j]);
        }
    }
    return res;
}


int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
string a,b;
cin >> a >> b;
int n=a.length();
int m=b.length();
int res=n-fun(a,b);
res+=(m-fun(a,b));
cout<<res<<endl;
}
}
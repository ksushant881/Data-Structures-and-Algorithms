#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc;
cin >> tc;
for(int casess=0;casess<tc;casess++){
        int n;
        cin>>n;
        vector<string>arr(n);
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }

        bool flag=false;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr[i][j]=='1'){
                    if(arr[i+1][j]=='0' && arr[i][j+1]=='0'){
                            flag=true;
                            break;
                    }
                }
            }
            if(flag==true) break;
        }

        if(!flag){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
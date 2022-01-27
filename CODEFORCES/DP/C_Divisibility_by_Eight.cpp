#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i] == '8' || s[i] == '0'){
            cout<<"YES"<<endl<<s[i];
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string str = "";
            str+=s[i];
            str+=s[j];
            if(stoi(str)%8 == 0){
                cout<<"YES"<<endl<<str;
                return;
            }
        }
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                string str = "";
                str+=s[i];
                str+=s[j];
                str+=s[k];
                if(stoi(str)%8 == 0){
                    cout<<"YES"<<endl<<str;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}



int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}
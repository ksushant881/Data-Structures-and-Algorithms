#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int a,int b,int c,int d) {
    int temp = (b+d)/60;
    int min = (b+d)%60;
    int hrs = (a+c+temp)%24;
    string s1 = to_string(hrs);
    string s2 = to_string(min);
    if(s1.length()==1) s1 = "0"+s1;
    if(s2.length()==1) s2 = "0"+s2;
    cout<<s1<<" "<<s2;

}

int main() {
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        solve(a,b,c,d);
        cout<<"\n";
    }
}
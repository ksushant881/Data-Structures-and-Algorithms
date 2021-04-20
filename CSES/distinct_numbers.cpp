#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define endl "\n"
#define mod 1000000007
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;
int temp;
set<ll>st;
for(int i=0;i<n;i++){
    cin >> temp;
    st.insert(temp);
}
cout << st.size();
}
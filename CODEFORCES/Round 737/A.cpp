#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
vector<int>v(n);
ll total=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    total+=v[i];
} 
sort(v.begin(),v.end());
ll first = total - v[n-1];
double x = (double)first/(n-1);
double y = (double)v[n-1];
double ans=x+y;
std::cout << std::fixed;
std::cout << std::setprecision(9);
cout<<ans<<endl;


}

}
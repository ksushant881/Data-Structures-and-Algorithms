#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
//cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

int n,m;
cin>>n>>m;
vector<int>v1;
vector<int>v2;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v1.push_back(x);
    // cin>>v1[i];
}
for(int i=0;i<m;i++){
    int x;
    cin>>x;
    v2.push_back(x);
    // cin>>v2[i];
}
// cout<<v2[0]<<"hell"<<endl;
sort(v2.begin(),v2.end());
sort(v1.begin(),v1.end());
// cout<<v2[0]<<"hell"<<endl;


// cout<<v2[0]<<"hell"<<endl;
vector<int>res;
int ans=INT_MAX;
int a=0,b=0;
bool f1=false,f2=false;
int curr1,curr2;
int num1=INT_MIN,num2=INT_MIN;
if(v1[a]<v2[b]){
    res.push_back(v1[a]);
    curr1=v1[a];
    // cout<<curr1<<"hi"<<endl;

    a++;
    f1=true;
    num1=0;
}
else if(v1[a]>v2[b]){
    res.push_back(v2[b]);
    
    curr2=v2[b];
    // cout<<curr2<<" "<<v2[b]<<"hi"<<endl;
    b++;
    f2=true;
    num2=0;
}
else{
    cout<<0;
    return 0;
}

for(int i=1;i<n+m;i++){
    if(a>=n || b>=m) break;
    if(v1[a]<v2[b]){
        res.push_back(v1[a]);
        curr1=v1[a];
        a++;
        f1=true;
        num1=i;
    }
    else if(v1[a]>v2[b]){
        res.push_back(v2[b]);
        curr2=v2[b];
        b++;
        f2=true;
        num2=i;
    }
    else{
        cout<<0;
        return 0;
    }
    if(f1 && f2){
        //f1=f2=false;
        if(num1 > num2){
            f2=false;
        }
        else{
            f1=false;
        }
        ans=min(ans,abs(curr1-curr2));
    }
}

if(a>=n && b<m){
    while(b!=m){
        res.push_back(v2[b]);
        ans=min(ans,abs(v2[b]-curr1));
        b++;
    }
}
else if(a<n && b>=m){
    while(a!=n){
        res.push_back(v1[a]);
        ans=min(ans,abs(v1[a]-curr2));
        a++;
    }
}

// for(auto x:res){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(int i=0;i<n+m;i++){
//     if(v1[a]<v2[b]){
//         res[i]=v1[a];
//         a++;
//     }
//     else{
//         res[i]=v2[b];
//         b++;
//     }
// }
// for(int i=1;i<n+m;i++){
//     ans=min(ans,res[i]-res[i-1]);
// }
cout<<ans;

}
}


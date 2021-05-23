#include <bits/stdc++.h>
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
ll age;
cin>>age;
ll dose;
cin>>dose;
vector<ll>v(10);
for(int i=0;i<10;i++){
    cin>>v[i];
}

int people=0;
for(int i=9;i>=age;i--){
    people+=v[i];
}

int res=0;
while(people>0){
    people-=dose;
    res++;
}
int minDay=res+1;
people+=v[age-1];
people-=dose;
int maxDay;
if(people>0){
    maxDay=minDay+1;
}
else{
    maxDay=minDay;
}
cout<<minDay<<" "<<maxDay<<"\n";


}
}
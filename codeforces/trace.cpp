#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pi 3.1415926536

double area(int r){
    return pi*r*r;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;
vector<int>radii(n);

for(int i=0;i<n;i++){
    cin >> radii[i];
}
sort(radii.begin(),radii.end());
float res = 0;
if(n%2 == 0){
    for(int i=1;i<n;i=i+2){
        res+=(area(radii[i])-area(radii[i-1]));
    }
}
else{
    if(n >2){
    for(int i=2;i<n;i=i+2){
        res+=(area(radii[i])-area(radii[i-1]));
    }
    res+=area(radii[0]);
    }
    else{
        res=area(radii[0]);
    }
}
cout << res;
}
#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n,m;
cin>>n>>m;

int points=n*m;
int total=n+m;
int count=0;
// while(points>0){
//     int removed = (m-1) + (n-1);
//     points = points - removed;

//     n--;
//     m--;
//     count++;
// }

// if(count%2==0){
//     cout<<"Akshat";
// }
// else{
//     cout<<"Malvika";
//     }

int x=min(n,m);
if(x%2==0){
    cout<<"Malvika";
}
else{
    cout<<"Akshat";
}

}
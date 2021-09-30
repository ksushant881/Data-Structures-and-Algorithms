#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int p,a,b,c,x,y;
cin>>p>>a>>b>>c>>x>>y;
int tot=p;
int anar1=0,anar2=0;
int charki1=0,charki2=0;
ll spend = min(b+x*a,c+y*a);
ll maal=p/spend;
// if(b+x*a < c+y*a){
//         anar2++;
//     }
//     else{
//         charki2++;
//     }
// while(p-spend > 0){
//     p-=spend;
//     if(b+x*a < c+y*a){
//         anar2++;
//     }
//     else{
//         charki2++;
//     }
// }
// cout<<max({anar1,charki1,anar2+charki2})<<endl;
cout<<maal<<endl;

}

}
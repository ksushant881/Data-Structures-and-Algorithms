#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// void solve(ll water,ll magic,ll wamt,ll mamt,ll &count,ll total){

//     if(total!=0 && wamt*100/total == water && mamt*100/total == magic)
//         {count=total; return;}
//     if(total!=0 && wamt*100/total > water && mamt*100/total > magic)
//         return;

//     solve(water,magic,wamt+1,mamt,count,total+1);
//     solve(water,magic,wamt,mamt+1,count,total+1);
// }

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll k;
ll water=100-k;
ll magic=k;
ll count = 0;

int currw=0,currm=0;
int currtotal=0;
int currperwater=0;
int currpermagic=0;

while(1){
    
    if(currperwater<water){
        currw++;
        currtotal++;
        count++;
        currperwater=(currw*100)/currtotal;
        currpermagic=(currm*100)/currtotal;
    }
    if(currpermagic==magic && currperwater==water) break;
    if(currpermagic<magic){
        currm++;
        currtotal++;
        count++;
        currperwater=(currw*100)/currtotal;
        currpermagic=(currm*100)/currtotal;
    }
    if(currpermagic==magic && currperwater==water) break;
}
cout<<count<<"\n";

}
}
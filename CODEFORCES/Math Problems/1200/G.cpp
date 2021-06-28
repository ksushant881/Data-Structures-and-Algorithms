#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(int curr,int dest,int count){
    if(curr == dest){
        return count;
    }
    if(curr > 2*dest || curr < dest*(-1)) return INT_MAX;
    return min(solve(curr+count+1,dest,count+1) , solve(curr-1,dest,count+1));
}



int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int x;
cin>>x;
int steps=0;
while((steps*(steps+1))/2<x) steps++;
if((steps*(steps+1))/2 == x+1) steps++;
cout<<steps<<endl;

}
}
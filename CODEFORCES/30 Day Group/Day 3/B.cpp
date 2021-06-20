#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int findOdd(vector<int>v){
    for(int i=0;i<v.size();i++){
        if(v[i]%2!=0)
            return i;
    }
}

int findEven(vector<int>v){
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0)
            return i;
    }
}

int main(){
fastio
 
int n;
cin>>n;

vector<int>v(n);
for(int i=0;i<n;i++) cin >> v[i];

int even=0,odd=0;
for(int i=0;i<3;i++){
    if(v[i]%2!=0){
        odd++;
    }
    else{
        even++;
    }
}

if(odd>even){
    cout<<findEven(v)+1;
}
else{
    cout<<findOdd(v)+1;
}

}
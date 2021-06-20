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
int n;
cin >> n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int count=0;
int one,two,zero;
one=two=zero=0;
for(int i=0;i<n;i++){
    if(arr[i]%3==0)
        zero++;
    else if(arr[i]%3==1)
        one++;
    else
        two++;
}

if(one == two && two == zero){
    cout<<count<<endl;
    continue;
}

for(int i=0;i<2;i++){

// for(int j=0;j<n;j++){
//         if(arr[j]%3==0)
//             zero++;
//         else if(arr[j]%3==1)
//             one++;
//         else if(arr[j]%3==2)
//             two++;
// }
if(two>n/3){
    int num = two - n/3;
    count+=num;
    zero+=num;
    two=n/3;
    
}
if(zero>n/3){
    int num = zero - n/3;
    count+=num;
    one+=num;
    zero=n/3;
    
}
if(one>n/3){
    int num = one - n/3;
    count+=num;
    two+=num;
    one=n/3;
    
}
}


cout<<count<<endl;
}
}
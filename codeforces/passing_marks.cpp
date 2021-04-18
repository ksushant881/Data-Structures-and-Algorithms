#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int am,bm,cm,tm,a,b,c;
    cin  >> am>>bm>>cm>>tm>>a>>b>>c;
    if(a+b+c >= tm && a>=am && b>=bm && c>=cm)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
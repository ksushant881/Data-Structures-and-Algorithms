#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
ll a,b,c;
cin>>a>>b>>c;

if(a==b || (abs(a)==abs(b) && c%2==0)){
    cout<<"=";
    return 0;
}
if(a>b){
    if(c%2==0){
        if(abs(b) > abs(a)) cout<<"<";
        else cout<<">";
        return 0;
    }
    else{
        cout<<">";
        return 0;
    }
}
if(b>a){
    if(c%2==0){
        if(abs(a) > abs(b)) cout<<">";
        else cout<<"<";
        return 0;
    }
    else{
        cout<<"<";
        return 0;
    }
}


}
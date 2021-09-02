#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

string s;
cin>>s;
string x="";
char y;
int i=0;
while(s[i]!='.'){
    x+=s[i];
    i++;
}
i++;
y=s[i];

if(y=='0' || y=='1' || y=='2'){
    cout<<x<<"-";
}
else if(y=='3' || y=='4' || y=='5' || y=='6'){
    cout<<x;
}
else{
    cout<<x<<"+";
}

}

}
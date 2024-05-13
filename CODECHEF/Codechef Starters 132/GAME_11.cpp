#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>bat(n),bow(m);
    f(i,n)cin>>bat[i];
    f(i,m) cin>>bow[i];
    sort(bat.begin(),bat.end());
    sort(bow.begin(),bow.end());
    if(n<4 or m<4 or n+m<11){
        cout<<-1<<endl;
        return;
    }
    
    ll skill = 0;
    for(int i=n-1;i>=n-4;i--){
        skill = (skill+bat[i]);
    }
    for(int i=m-1;i>=m-4;i--){
        skill = (skill+bow[i]);
    }
    int i=n-5,j=m-5;
    int count=8;

    while(i>=0 and j>=0){

        if(count==11)break;
        if(bat[i]>bow[j]){
            skill = (skill+bat[i]);
            i--;
            count++;
        } else {
            skill = (skill+bow[j]);
            j--;
            count++;
        }
    }
    if(count!=11){
        if(i<0){
            while(count!=11){
                skill = (skill+bow[j]);
                j--;
                count++;
            }
        } else{
            while(count!=11){
                skill = (skill+bat[i]);
                i--;
                count++;
            }
        }
    }
    cout<<skill<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}
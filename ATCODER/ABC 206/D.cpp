#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll ans=0;
class DSU{
    public:
        ll n;
        ll *parent;
        ll *rank;
        void init(ll n){
            this->n=n;
            this->parent=new ll[n];
            this->rank=new ll[n];

            for(ll i=0;i<n;i++){
                parent[i]=i;
            }

            for(ll i=0;i<n;i++){
                rank[i]=0;
            }
        }
 
        void print(){
            for(ll i=0;i<n;i++){
                cout<<parent[i]<<" ";
            }
            cout<<endl;
            for(ll i=0;i<n;i++){
                cout<<rank[i]<<" ";
            }
            cout<<endl;
        }
 
        ll findRep(ll x){
            if(parent[x]==x){
                return x;
            }
            parent[x] = findRep(parent[x]);
            return parent[x];
        }
 
        void doUnion(ll x,ll y){
            ll x_rep=findRep(x);
            ll y_rep=findRep(y);
            if(x_rep == y_rep) return;
            ans++;
            if(rank[x_rep] > rank[y_rep]){
                parent[y_rep] = x_rep;
            }
            else if(rank[x_rep] > rank[y_rep]){
                parent[x_rep] = y_rep;
            }
            else{
                parent[y_rep] = x_rep;
                rank[x_rep]++;
            }
        }
};
 
int main(){
fastio
 
    ll tc=1;
    //cin >> tc;
    for(ll casess=0;casess<tc;casess++){
 
        ll n;
        cin>>n;
        vector<ll>v(2000001);
        for(ll i=0;i<n;i++) cin>>v[i];
        DSU s;
        s.init(2000001);
        //s.print();

       for(int i=0;i<n;i++){
            int j=n-i-1;
            s.doUnion(v[i],v[j]);
        }
        cout<<ans<<endl;;
        //s.print();
 
    }
}
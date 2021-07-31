#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pi 3.1415926536
#define ll unsigned  long  long 
#define mod 1000000007
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
#define so(v) sort((v).begin(), (v).end());
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio


  ll n, a, b, num = 0, ans = 0;
  vector<ll> bg;

  cin >> n;

  rep(i,n){
    cin >> a;

    if (a == 1){
      cin >> b;
      b -= num;
      bg.push_back(b);

    }else if (a == 2){
      cin >> b;
      num += b;

    }else{ // 3
      so(bg)
      ans = bg[0] + num;
      
      bg.erase(bg.begin());

      p(ans)
    }

  }
}
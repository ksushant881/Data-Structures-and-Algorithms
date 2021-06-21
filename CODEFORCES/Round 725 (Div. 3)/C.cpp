#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fastio

    int tc = 1;
    cin >> tc;
    for (int casess = 0; casess < tc; casess++)
    {
        ll n, lLimit, rLimit;
        cin >> n >> lLimit >> rLimit;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            int lFind = lLimit - v[i];
            int rFind = rLimit - v[i];

            if(v[i] + v[i+1] > rLimit) break;
            
            int high = n;
            int low = i;
            while(high - low > 1){
                int mid = low + (high - low)/2;
                if(v[mid] >= lFind){
                    high = mid;
                }
                else{
                    low = mid;
                }
            }
            int leftPairs = high;

            high = n;
            low = i;
            while(high - low > 1){
                int mid = low + (high - low)/2;
                if(v[mid] <= rFind){
                    low = mid;
                }
                else{
                    high = mid;
                }
            }
            int rightPairs = low;

            ans+=(rightPairs - leftPairs + 1);
        }
        cout << ans << endl;
    }
}
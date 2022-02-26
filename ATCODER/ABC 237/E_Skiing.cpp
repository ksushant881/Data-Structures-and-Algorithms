#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvs = vector<vector<string>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;

template<typename T> using vv = vector<vector<T>>;
template<typename T> using vvv = vector<vector<vector<T>>>;
template<typename T> using pq = priority_queue<T>;
template<typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;

const int INF = 1000000000;
const ll LINF = 1000000000000000000;
const int DX[4] = {1, 0, -1, 0};
const int DY[4] = {0, 1, 0, -1};

#define _sel(_1, _2, x, ...) x
#define repn(i, n) for (ll i = 0; i < (n); i++)
#define reps(i, a, b) for (ll i = (a); i < (b); i++)
#define rep(i, ...) _sel(__VA_ARGS__, reps, repn)(i, __VA_ARGS__)
#define reppn(i, n) for (ll i = 1; i <= (n); i++)
#define repps(i, a, b) for (ll i = (a); i <= (b); i++)
#define repp(i, ...) _sel(__VA_ARGS__, repps, reppn)(i, __VA_ARGS__)
#define rrepn(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define rreps(i, a, b) for (ll i = (b) - 1; i >= (a); i--)
#define rrep(i, ...) _sel(__VA_ARGS__, rreps, rrepn)(i, __VA_ARGS__)
#define rreppn(i, n) for (ll i = (n); i >= 1; i--)
#define rrepps(i, a, b) for (ll i = (b); i >= (a); i--)
#define rrepp(i, ...) _sel(__VA_ARGS__, rrepps, rreppn)(i, __VA_ARGS__)

#define pb push_back
#define fi first
#define se second
#define rng(v) (v).begin(), (v).end()
#define rrng(v) (v).rbegin(), (v).rend()
#define siz(x) ll((x).size())
#define pow2(x) (1ll << (x))
#define bit(x, n) ((x) >> (n) & 1)
#define prt(x) cout << (x) << endl
#define dbg(x) dbgn(#x, x)
#define dec() cout << fixed << setprecision(15)

template<typename T, typename U> inline bool umax(T& m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U> inline bool umin(T& m, U x) { if (m > x) { m = x; return true; } return false; }
template<typename T> inline void errv(T& v) { for (auto x: v) cerr << x << " "; cerr << endl; }
inline void errv(vb& v) { for (auto x: v) cerr << (x ? 1 : 0) << " "; cerr << endl; }
template<typename T> inline void dbgn(string n, T x) { cerr << n << ": " << x << endl; }
template<typename T> inline void dbgn(string n, vector<T>& v) { cerr << n << ": "; errv(v); }
template<typename T> inline void dbgn(string n, vv<T>& m) { cerr << n << ":" << endl; for (auto& v: m) errv(v); }

ll MOD = 1000000007;


int main() {
    ll n, m;
    cin >> n >> m;

    vl h(n);
    rep(i, n) cin >> h[i];

    vl u(m), v(m);
    rep(i, m) cin >> u[i] >> v[i], u[i]--, v[i]--;

    vv<pll> g(n);
    rep(i, m) {
        ll c;
        if (h[u[i]] > h[v[i]]) {
            g[u[i]].pb({v[i], 0});
            g[v[i]].pb({u[i], (h[u[i]] - h[v[i]])});
        } else {
            g[u[i]].pb({v[i], (h[v[i]] - h[u[i]])});
            g[v[i]].pb({u[i], 0});
        }
    }

    pqg<pll> q;
    q.push({0, 0});

    vb f(n, false);

    vl ans(n, LINF);

    while (!q.empty()) {
        auto t = q.top(); q.pop();
        if (f[t.se]) continue;
        f[t.se] = true;
        ans[t.se] = t.fi;

        for (auto tt: g[t.se]) {
            if (f[tt.fi]) continue;
            q.push({t.fi + tt.se, tt.fi});
        }
    }

    ll ma = -LINF;

    rep(i, n) {
        if (h[0] < h[i]) continue;
        umax(ma, h[0] - h[i] - ans[i]);
    }

    prt(ma);

    return 0;
}
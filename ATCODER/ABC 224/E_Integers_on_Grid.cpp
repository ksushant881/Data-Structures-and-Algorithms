#include <bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define f(i, n) for (int i = 0; i < n; i++)

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int ans[10005][10005];
int arr[10005][10005];
int dfs(int x, int y, int h, int w)
{
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        if (x + dx[i] >= 1 && y + dy[i] >= 1 && x + dx[i] <= h && y + dy[i] <= w)
        {
            int p = x + dx[i];
            int q = y + dy[i];
            if (arr[p][q] > arr[x][y])
            {
                if (ans[p][q] == -1)
                    ans[p][q] = dfs(p, q, h, w);
                k = max(k, ans[p][q] + 1);
            }
        }
    }
    return k;
}

void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> p;
    f(i, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a][b] = c;
        p.push_back({a, b});
    }
    f(i, n)
    {
        if (ans[p[i][0]][p[i][1]] == -1)
        {
            int a = dfs(p[i][0], p[i][1], h, w);
            ans[p[i][0]][p[i][1]] = a;
            cout << a << endl;
        }
        else
            cout << ans[p[i][0]][p[i][1]] << endl;
    }
}

int main()
{
    memset(ans, -1, sizeof(ans));
    memset(arr, 0, sizeof(ans));
    fastio int tc = 1;
    f(casess, tc)
    {
        solve();
    }
}
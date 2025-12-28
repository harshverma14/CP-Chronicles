#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vpii vector<pair<int, int>>
#define twodvec vector<vector<int>>
#define mapii map<int, int>
#define unmapii unordered_map<int, int>
#define pb push_back
#define mapci map<char, int>
#define pii pair<int, int>
#define f(i, start, end) for (int i = start; i < end; i++)
#define forback(i, start, end) for (int i = start; i >= end; i--)
#define sortv(p) sort(p.begin(), p.end())
#define ceilf(a, b) (a + b - 1) / b
#define input(a, n)                 \
        for (int i = 0; i < n; i++) \
                cin >> a[i];
const int mod = 1e9 + 7;
void sieve(vector<int> &sieveo)
{
        vector<bool> ch(1e5 + 6, true);
        ch[0] = false;
        ch[1] = false;
        for (int i = 2; i <= 100005; i++)
        {
                if (ch[i] == false)
                        continue;
                sieveo.pb(i);
                for (int j = i * i; j <= 100005; j += i)
                        ch[j] = false;
        }
}

void solve()
{
        int a, b, c;
        cin >> a >> b >> c;
        int n = abs(b - a) * 2;
        if (a > n || b>n || c>n)
        {
                cout << "-1\n";
                return;
        }
        int ans = (c + n/2)%n; 
        if(ans == 0) cout<<n<<endl;
        else cout<<ans<<endl;
//submission link:  https://codeforces.com/problemset/submission/1560/355189601
}
signed main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin >> t;
        while (t--)
        {
                solve();
        }
        return 0;
}
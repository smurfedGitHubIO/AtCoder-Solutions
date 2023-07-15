#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define f first
#define s second
#define all(c) begin(c),end(c)
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef long double ld;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

using pll = pair<ll, ll>;
using tll = tuple<ll, ll, ll>;

const ll MAXN = 111;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;
const ll EPS = 1e-9;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

char c[MAXN][MAXN];
vector< vector<ll> > dp(MAXN, vector<ll>(MAXN, 0));

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	for(ll i=0; i<n; i++)
		for(ll j=0; j<m; j++)
			cin >> c[i][j];
	dp[0][0] = (c[0][0] == '#');
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			if(i == 0 and j == 0)
				dp[i][j] = (c[i][j] == '#');
			else if(i == 0)
				dp[i][j] = (c[i][j] == '#') + dp[i][j-1];
			else if(j == 0)
				dp[i][j] = (c[i][j] == '#') + dp[i-1][j];
			else
				dp[i][j] = (c[i][j] == '#') + min(dp[i][j-1], dp[i-1][j]);
		}
	}
	cout << dp[n-1][m-1];
	return 0;
}
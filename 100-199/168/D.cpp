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
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> osSet;

using pll = pair<ll, ll>;
using tll = tuple<ll, ll, ll>;

const ll MAXN = 1e5;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;
const ll eps = 1e-9;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	vector<ll> adj[n+1];
	vector<ll> par(n+1, -1);
	ll x, y;
	for(ll i=0; i<m; i++){
		cin >> x >> y;
		adj[x].eb(y);
		adj[y].eb(x);
	}
	vector<ll> dst(n+1, INF);
	queue<ll> ql;
	ql.push(1);
	dst[1] = 0;
	ll cnt = 1;
	while(!ql.empty()){
		ll fr = ql.front();
		ql.pop();
		if(cnt == n)
			break;
		for(auto edge : adj[fr]){
			if(dst[edge] > 1 + dst[fr]){
				dst[edge] = 1 + dst[fr];
				if(par[edge] == -1)
					cnt++;
				par[edge] = fr;
				ql.push(edge);
			}
		}
	}
	if(cnt != n){
		cout << "No";
		return 0;
	}
	cout << "Yes\n";
	for(ll i=2; i<=n; i++)
		cout << par[i] << "\n";
	return 0;
}
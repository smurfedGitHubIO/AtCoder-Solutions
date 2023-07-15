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
using pq = priority_queue<ll>;
using pqg = priority_queue<ll, vector<ll>, greater<ll>>;
using pgp = priority_queue<pll, vector<pll>, greater<pll>>;

const ll MAXN = 1e5 + 11;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;
const ll eps = 1e-9;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

map<ll, bool> check;
pgp A[MAXN];
vector<ll> color(MAXN, -1);
pqg cont;
vector<bool> vis(MAXN, false);

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll x, y;
	for(ll i=0; i<n-1; i++){
		cin >> x >> y;
		A[x].push(mp(y,i));
		A[y].push(mp(x,i));
	}
	ll mx = 0;
	cont.push(1);
	while(!cont.empty()){
		ll tp = cont.top();
		mx = max(mx, (ll)A[tp].size());
		vis[tp] = 1;
		cont.pop();
		ll cur = 1;
		while(!A[tp].empty()){
			x = A[tp].top().f, y = A[tp].top().s;
			A[tp].pop();
			if(!vis[x]){
				while(check[cur])
					cur++;
				color[y] = cur;
				cont.push(x);
				cur++;
			}
			else
				check[color[y]] = 1;
		}
		check.clear();
	}
	cout << mx << "\n";
	for(ll i=0; i<n-1; i++)
		cout << color[i] << "\n";
	return 0;
}
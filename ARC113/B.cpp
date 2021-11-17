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

const ll MAXN = 1e5;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;
const ll EPS = 1e-9;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

ll ipow(ll b, ll p, ll mod){
	if(p == 0) return 1;
	if(p == 1) return b%mod;
	if(p&1) return ((b%mod)*(ipow((b%mod * b%mod)%mod,p>>1,mod)))%mod;
	return ipow((b%mod * b%mod)%mod,p>>1,mod);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	a %= 10;
	if(a == 1 or a == 5 or a == 6 or a == 0)
		cout << a;
	else{
		vector<ll> A[] = {{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};
		ll q = ipow(b,c,A[a].size());
		cout << A[a][q];
	}
	return 0;
}
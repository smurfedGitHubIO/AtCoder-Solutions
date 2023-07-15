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

ll func(ll x){
	return (x*(x+1))>>1;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		ll mn = n, mx = m-n;
		if(mn > mx)
			cout << "0\n";
		else
			cout << func(mx-mn+1) << "\n";
	}
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <array>
#include <string>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mp make_pair
#define eb emplace_back
#define f first
#define s second
#define sz(x) (ll)x.size()
#define lnt(s) (ll)s.length()
#define mt(cnt) cnt.empty()
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> osSet;

using pll = pair<ll, ll>;
using pl = pair<ll, pll>;
using tll = tuple<ll, ll, ll>;

const ll maxN = 1e5;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

ll segtree[maxN << 2];
ll lazy[maxN << 2];
ll A[maxN];

inline ll left(ll x){
	return x << 1;
}

inline ll right(ll x){
	return (x<<1) + 1;
}

ll func(ll x){
	return (x*(x+1))/2;
}

ll _pow(ll b, ll p){
	if(p == 0) return 1;
	if(p == 1) return b;
	ll exB = b*b;
	if(p&1) return b*_pow(exB, p/2);
	return _pow(exB, p/2);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll a, b;
	cin >> a >> b;
	if(a%3 == 0 or b%3 == 0)
		cout << 0;
	else{
		if(b > a)
			swap(a, b);
		ll ans = INF;
		for(ll i=1; i<=(a>>1)+(a&1 ? 1 : 0); i++){
			ll q = (((a-i)>>1) + ((a-i)&1 ? 1 : 0))*b;
			ll p = ((b>>1)+(b&1 ? 1 : 0))*(a-i);
			ll qc = (((a-i)>>1))*b;
			ll pc = ((b>>1))*(a-i);
			ans = min(ans, max({i*a, q}) - min({i*a, qc}));
			ans = min(ans, max({i*a, p}) - min({i*a, pc}));
		}
		cout << ans;
	}
	return 0;
}
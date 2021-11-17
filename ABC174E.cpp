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

const ll maxN = 5e5 + 11;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

ll n, q;

ll segtree[maxN << 2];
ll lazy[maxN << 2];
ll A[maxN];
ll bit[maxN];

struct que{
	ll l, r, idx;
};

que queries[maxN];

bool cmp(que x, que y){
	return x.r < y.r;
}

void upd(ll idx, ll val, ll n){
	for(; idx<=n; idx+=idx&-idx)
		bit[idx] += val;
}

void query(ll idx, ll n){
	ll ans = 0;
	for(; idx>0; idx-=idx&-idx)
		ans += bit[idx];
	return ans;
}

void offAns(){
	memset(bit, 0, sizeof(bit));
	ll lv[maxN];
	memset(lv, -1, sizeof(lv));
	ll ans[q];
	ll quecnt = 0;
	for(ll i=0; i<n; i++){
		if(lv[A[i]] != -1)
			upd(lv[A[i]]+1, -1, n);
		lv[A[i]] = i;
		upd(i+1, 1, n);
		while(quecnt  < q and queries[quecnt].r == i){
			ans[queries[quecnt].idx] = query(queries[quecnt].r+1, n)-query(queries[quecnt].l, n);
			quecnt++;
		}
	}
	for(ll i=0; i<q; i++)
		cout << ans[i] << "\n";
}

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
	cin >> n >> q;
	for(ll i=0; i<n; i++)
		cin >> A[i];
	for(ll i=0; i<q; i++){
		cin >> queries[i].l >> queries[i].r;
		queries.idx = i;
	}
	sort(queries, queries+q, cmp);
	offAns();
	return 0;
}
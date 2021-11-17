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
	ll n;
	cin >> n;
	ll a[n][10];
	ll b[n][11];
	ll sms[n];
	for(ll i=0; i<n; i++){
		ll cur = 0;
		for(ll j=0; j<10; j++){
			cin >> a[i][j];
			if(a[i][j] == 1)
				cur ++;
		}
		sms[i] = cur;
	}
	for(ll i=0; i<n; i++)
		for(ll j=0; j<11; j++)
			cin >> b[i][j];
	ll ans = 0;
	ll cnt = 0;
	for(ll i=0; i<n; i++){
		ll mx = -INF;
		for(ll j=0; j<11; j++){
			if(j <= sms[i]){
				if(mx < b[i][j])
					cnt += (j == 0 ? 0 : 1);
				mx = max(mx, b[i][j]);
			}
		}
		if(cnt == 0){
			mx = -INF;
			for(ll j=1; j<11; j++)
				if(j <= sms[i])
					mx = max(mx, b[i][j]);
			cnt = 1;
		}
		ans += mx;
	}
	cout << ans;
	return 0;
}
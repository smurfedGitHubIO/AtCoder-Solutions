#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAXN = 2e5 + 11;

ll segtree[MAXN<<2];
vector<ll> lazy(MAXN<<2, 0);
ll A[MAXN];

inline ll left(ll x){
	return (x<<1)+1;
}

inline ll right(ll x){
	return (x<<1)+2;
}

void build(ll node, ll l, ll r){
	if(l == r){
		segtree[node] = A[l];
	}
	else{
		ll mid = (l+r)>>1;
		build(left(node), l, mid);
		build(right(node), mid+1, r);
		segtree[node] = segtree[left(node)] + segtree[right(node)];
	}
}

void update(ll node, ll l, ll r, ll x, ll y, ll val){
	if(l > y or r < x)
		return;
	if(l != r){
		lazy[left(node)] += lazy[node];
		lazy[right(node)] += lazy[node];
	}
	else if(x <= l and r <= y){
		segtree[node] -= val;
		segtree[node] -= lazy[node];
		if(l != r){
			lazy[left(node)]
		}
	}
	else{
		ll mid = (l+r)>>1;
		update(left(node), l, mid, x, y, val);
		update(right(node), mid+1, r, x, y, val);
		segtree[node] = segtree[left(node)] + segtree[right(node)];
	}
}

ll check(ll node, ll l, ll r, ll i){
	if(l != r){
		segtree[node] -= lazy[node];
		lazy[left(node)] += lazy[node];
		lazy[right(node)] += lazy[node];
		lazy[node] = 0;
	}
	if(l == r and l == i){
		return segtree[node];
	}
	else{
		ll mid = (l+r)>>1;
		if(i <= mid)
			return check(left(node), l, mid, i);
		return check(right(node), mid+1, r, i);
	}
}

int main(){
	ll n, k;
	cin >> n >> k;
	for(ll i=0; i<n; i++){
		cin >> A[i];
	}
	sort(A, A+n);
	build(0, 0, n-1);
	ll ans = 0;
	for(ll i=0; i<=n-k; i++){
		ll x = check(0, 0, n-1, i);
		cout << x << "\n";
		if(x != 0){
			ans += x;
			update(0, 0, n-1, i, i+k-1, x);
		}
	}
	cout << ans;
	return 0;
}
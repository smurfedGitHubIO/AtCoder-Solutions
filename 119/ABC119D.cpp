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
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ost;

using pll = pair<ll, ll>;
using tll = tuple<ll, ll, ll>;

const ll MAXN = 1e5;
const ll INF = 1e17;
const ll MOD = 1e9 + 7;
const ll EPS = 1e-9;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll xs[] = {-1, 1, 0, 0, -1, 1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll a, b, q, x;
	cin >> a >> b >> q;
	vector<ll> A(a);
	vector<ll> B(b);
	for(ll i=0; i<a; i++){
		cin >> A[i];
	}
	for(ll i=0; i<b; i++){
		cin >> B[i];
	}
	sort(begin(A), end(A));
	sort(begin(B), end(B));
	while(q--){
		cin >> x;
		ll la = lower_bound(begin(A), end(A), x) - begin(A);
		if(la == a){
			la--;
		}
		ll ha = upper_bound(begin(A), end(A), x) - begin(A);
		if((ha != 0 and A[ha] >= x) or ha == a){
			ha--;
		}
		ll lb = lower_bound(begin(B), end(B), x) - begin(B);
		if(lb == b){
			lb--;
		}
		ll hb = upper_bound(begin(B), end(B), x) - begin(B);
		if((hb != 0 and B[hb] >= x) or hb == b){
			hb--;
		}
		ll mn = INF;
//		cout << A[la] << " " << B[lb] << " " << A[ha] << " " << B[hb] << " " << x << "\n";
		if(A[la] >= x and B[lb] >= x){
			mn = min(mn, max(A[la]-x, B[lb]-x));
		}
		if(A[la] >= x and B[hb] <= x){
			mn = min(mn, min(A[la]+x-2*B[hb], 2*A[la]-x-B[hb]));
		}
		if(A[ha] <= x and B[lb] >= x){
			mn = min(mn, min(B[lb]+x-2*A[ha], 2*B[lb]-x-A[ha]));
		}
		if(A[ha] <= x and B[hb] <= x){
			mn = min(mn, max(x-A[ha], x-B[hb]));
		}
		cout << mn << "\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	vector<ll> cnt(m, 0);
	ll k, x;
	for(ll i=0; i<n; i++){
		cin >> k;
		for(ll j=0; j<k; j++){
			cin >> x;
			cnt[x-1] += 1;
		}
	}
	ll ans = 0;
	for(ll i=0; i<m; i++){
		ans += (cnt[i] == n);
	}
	cout << ans;
	return 0;
}
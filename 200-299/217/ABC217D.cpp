#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll l, q;
	cin >> l >> q;
	set<ll> stl;
	stl.insert(0);
	stl.insert(l);
	ll c,x;
	while(q--){
		cin >> c >> x;
		if(c == 1)
			stl.insert(x);
		else{
			ll lo = *stl.lower_bound(x), hi = *(--stl.upper_bound(x));
			cout << lo-hi << "\n";
		}
	}
	return 0;
}
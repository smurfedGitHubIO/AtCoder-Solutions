#include <bits/stdc++.h>
#define mt make_tuple
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll a, b, n;
	cin >> a >> b >> n;
	tuple<ll, ll, ll> tpl[n];
	for(ll i=0; i<n; i++){
		ll x, y;
		cin >> x >> y;
		tpl[i] = mt(x,y,i);
	}
	ll counter = 0, last = 0;
	sort(tpl,tpl+n);
	for(ll i=0; i<n; i++){
		if(get<0>(tpl[i])-last > 1)
			counter += get<0>(tpl[i])-last-1;
		last = get<0>(tpl[i]);
		tpl[i] = mt(get<1>(tpl[i]),get<0>(tpl[i])-counter,get<2>(tpl[i]));
	}
	counter = 0, last = 0;
	sort(tpl,tpl+n);
	for(ll i=0; i<n; i++){
		if(get<0>(tpl[i])-last > 1)
			counter += get<0>(tpl[i])-last-1;
		last = get<0>(tpl[i]);
		tpl[i] = mt(get<2>(tpl[i]),get<1>(tpl[i]),get<0>(tpl[i])-counter);
	}
	sort(tpl,tpl+n);
	for(ll i=0; i<n; i++)
		cout << get<1>(tpl[i]) << " " << get<2>(tpl[i]) << "\n";
	return 0;
}
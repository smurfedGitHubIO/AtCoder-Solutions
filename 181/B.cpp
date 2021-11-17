#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll func(ll x){
	return (x*(x+1))/2;
}

ll funcs(ll l, ll r){
	return func(r) - func(l-1);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll ans = 0;
	while(n--){
		ll a, b;
		cin >> a >> b;
		ans += funcs(a,b);
	}
	cout << ans;
	return 0;
}
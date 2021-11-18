#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll ans = 0;
	for(ll i=1; i*i <= n; i++){
		ll x = n/i, mx = 0;
		for(ll j=1; j*j <= x; j++){
			if(x%j == 0){
				mx = (mx < j ? j : mx);
			}
		}
		ans += mx*i;
	}
	cout << ans;
	return 0;
}
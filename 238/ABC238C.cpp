#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 998244353;

ll modpow(ll b, ll p){
	if(p == 0) return 1;
	if(p == 1) return b%MOD;
	ll x = modpow((b*b)%MOD, p/2);
	if(p&1)
		return (x*b)%MOD;
	return x%MOD;
}

ll func(ll x){
	x %= MOD;
	ll ans = (((x*(x+1))%MOD)*(modpow(2,MOD-2)))%MOD;
	return ans;
}

int main(){
	ll n;
	cin >> n;
	ll cur = 9, p = 1, ans = 0, q = 1;
	while(true){
		if(cur >= n){
			ans += func(n-p+1);
			ans %= MOD;
			break;
		}
		else{
			ans += func(cur-p+1);
			ans %= MOD;
		}
		p *= 10;
		cur = cur*10 + 9;
	}
	cout << ans;
	return 0;
}
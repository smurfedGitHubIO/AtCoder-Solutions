#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e6 + 11;
const ll MAXX = 1e18 + 11;

ll func(ll a, ll b){
	return (a+b)*(a+b)*(a+b) - 2*a*b*(a+b);
}

int main(){
	ll n;
	cin >> n;
	ll lo = 0, hi = MAXN;
	ll qn, qt;
	while(lo <= hi){
		ll mid = lo+(hi-lo)/2;
		if(mid*mid*mid < n){
			lo = mid+1;
		}
		else{
			hi = mid-1;
			qt = mid;
		}
	}
	ll ans = MAXX;
	for(ll i=0; i<=qt; i++){
		if(func(i, qt-i) >= n)
			ans = min(ans, func(i, qt-i));
	}
	cout << ans;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e5 + 11;
const ll MAXX = 1e18;

vector<bool> isP(MAXN, true);
vector<ll> primes;
vector<ll> phi(MAXN, 0);

void init(){
	isP[0] = isP[1] = false;
	for(ll i=2; i<MAXN; i++){
		if(isP[i]){
			primes.emplace_back(i);
		}
		for(ll j=0; j<primes.size() and primes[j]*i <= MAXN; j++){
			isP[primes[j]*i] = false;
		}
	}
}

int main(){
	init();
	ll t;
	cin >> t;
	ll lo = 0, hi = primes.size();
	ll q = 0, sq = 0;
	while(lo <= hi){
		ll mid = lo + (hi-lo)/2;
		if(primes[mid]*primes[mid]*primes[mid]*2 <= t){
			lo = mid+1;
			q = mid;
		}
		else{
			hi = mid-1;
		}
	}
	ll ans = 0;
	for(int i=1; i<=q; i++){
		lo = 0;
		hi = i-1;
		sq = i-1;
		while(lo <= hi){
			ll mid = lo + (hi-lo)/2;
			if(primes[i]*primes[i]*primes[i]*primes[mid] <= t){
				lo = mid+1;
				sq = mid;
			}
			else{
				hi = mid-1;
			}
		}
		ans += sq+1;
	}
	cout << ans;
	return 0;
}
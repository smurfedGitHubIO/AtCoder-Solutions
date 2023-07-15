#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	pair<ll, ll> p[n];
	for(ll i=0; i<n; i++){
		cin >> p[i].f >> p[i].s;
	}
	sort(p, p+n);
	ll ans = 0;
	for(ll i=n-1; i>=0; i--){
		if(m > p[i].s){
			ans += p[i].f*p[i].s;
			m -= p[i].s;
		}
		else{
			ans += p[i].f*m;
			break;
		}
	}
	cout << ans;
	return 0;
}
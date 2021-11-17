#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXX = 1e14 + 23;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	ll ans = MAXX;
	for(ll i=1; i<(1<<((ll)s.length())); i++){
		ll cur = 0, numZ = 0;
		for(ll j=0; j<(ll)s.length(); j++){
			if(i&(1<<j))
				cur += (s[j]-'0');
			else
				numZ += 1;
		}
		if(cur%3 == 0)
			ans = min(ans, numZ);
	}
	cout << (ans != MAXX ? ans : -1);
	return 0;
}
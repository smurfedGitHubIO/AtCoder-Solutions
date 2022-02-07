#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, q;
	cin >> n >> q;
	string st;
	cin >> st;
	ll pref[n];
	string cur = "";
	for(ll i=0; st[i]; i++){
		pref[i] = 0;
		if(st[i-1] == 'A' and st[i] == 'C')
			pref[i] = (i > 0 ? pref[i-1] : 0) + 1;
		else
			pref[i] = (i > 0 ? pref[i-1] : 0);
	}
	ll l, r;
	while(q--){
		cin >> l >> r;
		--r, --l;
		cout << pref[r] - pref[l] << "\n";
	}
	return 0;
}
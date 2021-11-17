#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

using pll = pair<ll, pair<ll, ll> >;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	pll ar[n];
	for(ll i=0; i<n; i++)
		cin >> ar[i].first >> ar[i].second.first >> ar[i].second.second;
	sort(ar, ar+n);
	ll ans = true;
	ll l=0, r=0, cur = 0, curx = ar[0].first, cury=ar[0].second.first;
	for(ll i=0, j=0; i<n and j<n;){
		while(ar[i].first >= curx and ar[i].first < cury){
			cury = min(cury, ar[i].second.first);
			cur += ar[i].second.second;
			if(i+1 == n)
				break;
			if(ar[i+1].first >= cury)
				break;
			i++;
		}
		ans &= !(cur > m);
		cur -= ar[j].second.second;
		j++;
		i++;
		curx = ar[j].first;
		cury = ar[j].second.first;
	}
	cout << (ans ? "Yes" : "No");
	return 0;
}
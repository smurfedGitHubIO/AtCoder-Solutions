#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e14 + 23;
using pll = pair<double, double>;

double slope(pll a, pll b){
	if(a.first == b.first) return 0;
	if(a.second == b.second) return INF;
	return (b.second-a.second)/(b.first-a.first);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	pair<double, double> pl[n];
	for(ll i=0; i<n; i++)
		cin >> pl[i].first >> pl[i].second;
	sort(pl, pl+n);
	bool ans = false;
	for(ll i=0; i<n; i++){
		for(ll j=i+1; j<n; j++){
			for(ll k=j+1; k<n; k++){
				if(slope(pl[i], pl[j]) == slope(pl[j], pl[k]) or slope(pl[i], pl[j]) == slope(pl[k], pl[j]) or slope(pl[j], pl[i]) == slope(pl[j], pl[k]) or slope(pl[j], pl[i]) == slope(pl[k], pl[j]))
					ans = 1;
			}
		}
	}
	cout << (ans ? "Yes" : "No");
	return 0;
}
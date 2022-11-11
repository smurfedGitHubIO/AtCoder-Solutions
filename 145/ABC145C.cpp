#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

double ret(pair<double, double> a, pair<double, double> b){
	return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	pair<double, double> pl[n];
	for(ll i=0; i<n; i++)
		cin >> pl[i].first >> pl[i].second;
	double ans = 0;
	ll cnt = 1;
	for(ll i=0; i<n; i++){
		double q = 0;
		for(ll j=i+1; j<n; j++){
			q = ret(pl[i], pl[j]);
			ans += q;
		}
	}
	cout << fixed << setprecision(8) << 2*ans/n;
	return 0;
}
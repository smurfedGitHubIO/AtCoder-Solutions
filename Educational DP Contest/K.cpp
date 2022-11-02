#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e18 + 11;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	ll A[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
	}
	ll b[n][m+1];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<=m; j++){
			b[i][j] = (j == 0);
		}
	}
	ll f = 0, s = 0;
	map<ll, ll> mpl;
	ll mn = INF;
	for(ll j=0; j<=m; j++){
		for(ll i=0; i<n; i++){
			b[i][j] = (mpl[j] > 0 ? min(b[i][j], mpl[j]) : b[i][j]);
			if (j + A[i] <= m and (b[i][j] >= 1 or mpl[j] >= 1)) {
				b[i][j+A[i]] = (b[i][j] >= 1 ? b[i][j] : mpl[j]) + 1;
			} else if (j + A[i] > m and (b[i][j] > 0 or mpl[j] > 0)) {
				ll q = (b[i][j] > 0 ? b[i][j] : mpl[j]);
				if (q < mn) {
					if (q < mn) {
						s = f = 0;
						mn = q;
					}
					if ((q-1)&1) {
						f += 1;
					} else {
						s += 1;
					}
				}
			}
			mpl[j] = (mpl[j] == 0 ? b[i][j] : min(b[i][j], mpl[j]));
		}
	}
	for(ll i=0; i<n; i++){
		for(ll j=0; j<=m; j++){
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}
	cout << s << " " << f << "\n";
	cout << (f >= s ? "First" : "Second");
	return 0;
}
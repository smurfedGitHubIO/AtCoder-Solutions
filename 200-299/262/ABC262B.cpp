#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll dp[100][100];

void init(){
	for(ll i=0; i<100; i++){
		for(ll j=0; j<100; j++){
			dp[i][j] = 0;
		}
	}
}

int main(){
	init();
	ll n, m;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		ll x, y;
		cin >> x >> y;
		--x, --y;
		dp[x][y] = 1;
		dp[y][x] = 1;
	}
	ll ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				if(dp[i][j] and dp[i][k] and dp[k][j])
					ans += 1;
			}
		}
	}
	cout << ans;
	return 0;
}
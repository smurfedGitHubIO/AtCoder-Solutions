#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	ll ans = 0;
	cin >> n;
	while(n > 1){
		n /= 2;
		ans ++;
	}
	cout << ans;
	return 0;
}
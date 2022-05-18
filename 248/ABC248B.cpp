#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b, x;
	cin >> a >> b >> x;
	ll ans = 0;
	while(a < b){
		a *= x;
		ans ++;
	}
	cout << ans;
	return 0;
}
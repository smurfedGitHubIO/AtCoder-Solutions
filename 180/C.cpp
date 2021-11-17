#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	set<ll> ans;
	for(ll i=1; i*i <= n; i++){
		if(n%i == 0){
			ans.insert(i);
			ans.insert(n/i);
		}
	}
	while(!ans.empty()){
		cout << *ans.begin() << "\n";
		ans.erase(ans.begin());
	}
	return 0;
}
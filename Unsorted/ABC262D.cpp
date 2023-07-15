#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll A[100];
ll n;

ll solve(ll x, ll i, ll sum){
	if(i >= n){
		return 0;
	}
	ll ans = 0;
	if(sum%x == 0){
		ans += 1;
	}
	ans += solve(x+1, i+1, sum+A[i]) + solve(x, i+1, sum);
	return ans;
}

int main(){
	cin >> n;
	for(ll i=0; i<n; i++){
		cin >> A[i];
	}
	return 0;
}
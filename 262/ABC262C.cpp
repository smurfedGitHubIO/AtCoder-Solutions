#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 5e5 + 11;

vector<ll> v[MAXN];

int main(){
	ll n, x;
	cin >> n;
	ll prop = 0, ans = 0;
	for(ll i=0; i<n; i++){
		cin >> x;
		if(i+1 == x){
			prop += 1;
		}
		else{
			v[x].emplace_back(i+1);
			if(v[i+1].size() != 0){
				ll lo = 0, hi = v[i+1].size();
				ll q = -1;
				while(lo <= hi){
					ll mid = lo + (hi-lo)/2;
					if(v[i+1][mid] == x){
						ans += 1;
						break;
					}
					else if(v[i+1][mid] < x){
						lo = mid+1;
					}
					else{
						hi = mid-1;
					}
				}
			}
		}
	}
	ans += (prop*(prop-1))/2;
	cout << ans;
	return 0;
}
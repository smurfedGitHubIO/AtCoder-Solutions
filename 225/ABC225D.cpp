#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long int ll;

int main(){
	ll n, q;
	cin >> n >> q;
	pair<ll, ll> A[n];
	for(ll i=0; i<n; i++)
		A[i] = {-1,-1}; //front, rear
	while(q--){
		ll x, y, z;
		cin >> z;
		if(z == 3){
			cin >> x;
			x -= 1;
			ll xc = x, xt = x;
			ll left = 0, right = 0;
			while(x != -1){
				left += 1;
				xt = x;
				x = A[x].second;
			}
			while(xc != -1){
				right += 1;
				xc = A[xc].first;
			}
			cout << left + right-1 << " ";
			while(xt != -1){
				cout << xt+1 << " ";
				xt = A[xt].first;
			}
			cout << "\n";
		}
		else if(z == 1){
			cin >> x >> y;
			A[x-1].first = y-1;
			A[y-1].second = x-1;
		}
		else{
			cin >> x >> y;
			A[x-1].first = -1;
			A[y-1].second = -1;
		}
	}
	return 0;
}
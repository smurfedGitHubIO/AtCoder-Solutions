#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll A[n];
	ll B[n];
	ll C[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
	}
	for(ll i=0; i<n; i++){
		cin >> B[i];
	}
	for(ll i=0; i<n; i++){
		cin >> C[i];
	}
	sort(A, A+n);
	sort(B, B+n);
	sort(C, C+n);
	ll cur=0;
	vector<ll> Bs;
	for(ll i=0; i<n and cur < n; i++){
		if(B[cur] > A[i]){
			Bs.emplace_back(B[cur]);
			cur++;
		}
		else if(B[cur] <= A[i]){
			while(cur<n and B[cur] <= A[i]){
				cur++;
			}
			if(cur < n and B[cur] > A[i]){
				Bs.emplace_back(B[cur]);
			}
			cur++;
		}
	}
	cur = 0;
	vector<ll> ans;
	for(ll i=0; i<Bs.size() and cur<n; i++){
		if(C[cur] > Bs[i]){
			ans.emplace_back(C[cur]);
			cur++;
		}
		else if(C[cur] <= Bs[i]){
			while(cur<n and C[cur] <= Bs[i]){
				cur++;
			}
			if(cur < n and C[cur] > Bs[i]){
				ans.emplace_back(C[cur++]);
			}
		}
	}
	cout << ans.size();
	return 0;
}
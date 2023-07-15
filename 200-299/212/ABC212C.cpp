#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	ll A[n];
	ll B[m];
	for(ll i=0; i<n; i++)
		cin >> A[i];
	for(ll i=0; i<m; i++)
		cin >> B[i];
	sort(A, A+n);
	sort(B, B+m);
	ll lo = 0, hi = 0;
	ll cur = 0, mn = 1000000000000;
	while(hi <= m-1 and lo <= n-1){
		cur = abs(B[hi]-A[lo]);
		mn = min(cur, mn);
		if(hi == m-1 or lo == n-1)
			break;
		if(abs(B[hi+1]-A[lo]) < abs(B[hi]-A[lo+1]))
			hi += 1;
		else
			lo += 1;
	}
	cout << mn;
	return 0;
}
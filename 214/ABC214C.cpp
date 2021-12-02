#include <bits/stdc++.h>
#define mp make_pair
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair< pair<ll, ll>, ll> pll;

int main(){
	ll n;
	cin >> n;
	pll A[n];
	ll s[n];
	ll t[n];
	for(ll i=0; i<n; i++){
		cin >> A[i].f.s;
		A[i].s = i;
		s[i] = A[i].f.s;
	}
	for(ll i=0; i<n; i++){
		cin >> A[i].f.f;
		t[i] = A[i].f.f;
	}
	vector<ll> times(n, -1);
	sort(A, A+n);
	for(ll i=0; i<n; i++){
		if(times[(A[i].s-1+n)%n] == -1){
			times[A[i].s] = A[i].f.f;
			for(ll j=A[i].s+1; j!=A[i].s; j = (j+1)%n){
				if(times[(j-1+n)%n]+A[(j-1+n)%n].f.f < t[j])
					times[A[j].s] = times[(j-1+n)%n]+A[(j-1+n)%n].f.f;
				else
					break;
			}
		}
		else if(times[A[i].s] == -1){
			times[A[i].s] = min(A[i].f.f, times[(A[i].s-1+n)%n]+s[(A[i].s-1+n)%n]);
		}
	}
	for(ll i=0; i<n; i++)
		cout << times[i] << "\n";
	return 0;
}
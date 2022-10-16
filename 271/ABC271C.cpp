#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
  ll n;
  cin >> n;
  ll A[n];
  vector<ll> vl(n+1, -1);
  vector<ll> wah;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if (vl[A[i]] <= n and vl[A[i]] == -1 and (n-i-1)/2 >= A[i]-i-1) {
      vl[A[i]] = i+1;
      wah.emplace_back(A[i]);
    }
  }
  ll mx = 0;
  for(ll i=0; i<wah.size(); i++){
    if (wah[i]-i-1 <= (n-vl[wah[i]])/2) {
      mx = max(mx, wah[i] + (n-vl[wah[i]])/2 - (wah[i]-i-1));
    }
  }
  cout << mx;
  return 0;
}
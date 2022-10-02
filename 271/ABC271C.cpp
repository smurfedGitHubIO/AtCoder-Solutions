#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
  ll n;
  cin >> n;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  sort(A, A+n);
  ll mx = 0;
  for(ll i=0; i<n; i++){
    ll sc = i+1;
    if (sc < A[i]) {
      ll missing = A[i]-sc;
      if (missing <= ((n-sc)>>1)) {
        mx = max(mx, sc+((n-sc)>>1)-missing);
      }
    } else {
      mx = max(mx, sc+((n-sc)>>1));
    }
    cout << mx << "\n";
  }
  cout << mx;
  return 0;
}
#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll A[n];
  ll ans = 0;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    ans += A[i];
  }
  sort(A, A+n);
  vector<pll> vp;
  for(ll i=0; i<2*n; i++){
    if(i == 0) {
      vp.emplace_back(mp(A[i], i));
    } else if((A[(i-1)%n]%m == A[i%n]%m or (A[(i-1)%n]+1)%m == A[i%n]%m) and i%n != vp[vp.size()-1].s) {
      vp.emplace_back(mp(A[i%n]+vp[vp.size()-1].f, vp[vp.size()-1].s));
    } else if(i%n != vp[vp.size()-1].s) {
      vp.emplace_back(mp(A[i%n], i%n));
    } else {
      break;
    }
  }
  ll mx = 0;
  for(ll i=0; i<vp.size(); i++){
    mx = max(mx, vp[i].f);
  }
  cout << ans - mx;
  return 0;
}
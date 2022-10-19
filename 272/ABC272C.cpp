#include <bits/stdc++.h>
#define eb emplace_back
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  vector<ll> o;
  vector<ll> e;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if(A[i]&1){
      o.eb(A[i]);
    } else {
      e.eb(A[i]);
    }
  }
  ll ans = -1;
  sort(begin(o), end(o));
  sort(begin(e), end(e));
  for(ll i=o.size()-2; i>=0; i--){
    if(o[i] != o[o.size()-1]){
      ans = max(ans, o[i]+o[o.size()-1]);
      break;
    }
  }
  for(ll i=e.size()-2; i>=0; i--){
    if(e[i] != e[e.size()-1]){
      ans = max(ans, e[i]+e[e.size()-1]);
      break;
    }
  }
  cout << ans;
  return 0;
}
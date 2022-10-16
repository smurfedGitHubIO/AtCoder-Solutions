#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  vector<ll> v;
  map<ll, bool> ml;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if (!ml[A[i]]) {
      ml[A[i]] = 1;
      v.emplace_back(A[i]);
    }
  }
  sort(begin(v), end(v));
  vector<ll> vans(n, 0);
  for(ll i=0; i<n; i++){
    ll lo=0, hi=v.size();
    ll qr = 0;
    while(lo <= hi){
      ll mid = lo + ((hi-lo)>>1);
      if (v[mid] == A[i]) {
      	qr = mid;
        break;
      } else if (v[mid] < A[i]) {
        lo = mid+1;
      } else {
        hi = mid-1;
      }
    }
    vans[v.size()-1-qr] += 1;
  }
  for(ll i=0; i<n; i++){
    cout << vans[i] << "\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  vector<ll> vl;
  vector<ll> vc;
  ll mn = 10000000000;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if (A[i]%2 != 0 and A[i]%3 != 0) {
      mn = min(mn, A[i]);
      vc.emplace_back(A[i]);
    } else {
      vl.emplace_back(A[i]);
    }
  }
  bool check = true;
  ll ans = 0;
  if (vc.size() == 0) {
    mn = vl[0];
    for(ll i=1; i<vl.size(); i++){
      mn = __gcd(mn, vl[i]);
    }
  } else {
    for(ll i=1; i<vc.size(); i++){
      if(vc[i] != vc[i-1]) {
        check = false;
        break;
      }
    }
  }
  for(ll i=0; i<vl.size(); i++){
    if (vl[i]%mn != 0) {
      check = false;
      break;
    } else {
      ll qt = vl[i]/mn;
      while(qt%2 == 0){
        qt /= 2;
        ans ++;
      }
      while(qt%3 == 0){
        qt /= 3;
        ans ++;
      }
      if (qt != 1) {
        check = false;
      }
    }
  }
  cout << (check ? ans : -1);
  return 0;
}
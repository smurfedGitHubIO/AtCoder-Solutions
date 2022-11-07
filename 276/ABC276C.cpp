#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  ll B[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  ll inds = n-1;
  vector<ll> vl;
  for(ll i=n-1; i>0; i--){
    if (A[i] > A[i-1]) {
      inds = i-1;
      vl.emplace_back(A[i]);
    } else {
      inds = i-1;
      vl.emplace_back(A[i]);
      vl.emplace_back(A[i-1]);
      break;
    }
  }
  ll kj = -1;
  for(ll i=0; i<vl.size()-1; i++){
    if(vl[i] < vl[vl.size()-1]) {
      kj = max(kj, vl[i]);
    }
  }
  for(ll i=0; i<inds; i++){
    cout << A[i] << " ";
  }
  cout << kj << " ";
  sort(begin(vl), end(vl), greater<ll>());
  for(ll i=0; i<vl.size(); i++){
    if(vl[i] != kj) {
      cout << vl[i] << " ";
    }
  }
  return 0;
}
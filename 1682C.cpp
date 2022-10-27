#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll x;
    cin >> x;
    set<ll> A;
    ll p;
    for(ll i=0; i<x; i++){
      cin >> p;
      A.insert(p);
    }
    for(auto x : A){
      cout << x << "\n";
    }
    vector<ll> a;
    vector<ll> b;
    for(ll i=0; i<x; i++){
      if(!i&1)
        a.emplace_back(A[i]);
      else
        b.emplace_back(A[i]);
    }
    ll ans = 0, cnt = 0, k=0;
    for(ll i=0; i<a.size(); i++){
      A[k++] = a[i];
    }
    for(ll i=b.size()-1; i>=0; i--){
      A[k++] = b[i];
    }
    for(ll i=0; i<x; i++){
      if(i == 0 or A[i] > A[i-1]){
        cnt++;
      } else if(A[i] < A[i-1]){
        break;
      }
    }
    for(ll i=x-1; i>=0; i--){
      if(i == x-1 or A[i] > A[i+1]){
        ans++;
      } else if(A[i] < A[i+1]){
        break;
      }
    }
    cout << max(cnt, ans) << "\n";
  }
  return 0;
}
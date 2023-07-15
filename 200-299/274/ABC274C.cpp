#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll x;
  cin >> x;
  ll A[x+1];
  vector<ll> v(2*x+2, 1);
  v[1] = 0;
  for(ll i=1; i<=x; i++){
    cin >> A[i];
    v[i*2+1] = v[i*2] = v[A[i]] + 1;
  }
  for(ll i=1; i<=2*x+1; i++){
    cout << v[i] << "\n";
  }
  return 0;
}
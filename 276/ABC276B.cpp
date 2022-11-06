#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> A[n+1];
  ll a, b;
  for(ll i=0; i<m; i++){
    cin >> a >> b;
    A[a].emplace_back(b);
    A[b].emplace_back(a);
  }
  for(ll i=1; i<=n; i++){
    sort(begin(A[i]), end(A[i]));
    cout << A[i].size() << " ";
    for(ll j=0; j<A[i].size(); j++){
      cout << A[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll A[n][n];
  for(ll i=0; i<n; i++){
    for(ll j=0; j<n; j++){
      A[i][j] = 0;
      if(i == j){
        A[i][j] = 1;
      }
    }
  }
  while(m --){
    ll k;
    cin >> k;
    ll b[k];
    for(ll i=0; i<k; i++){
      cin >> b[i];
      --b[i];
    }
    for(ll i=0; i<k; i++){
      for(ll j=i+1; j<k; j++){
        A[b[i]][b[j]] = A[b[j]][b[i]] = 1;
      }
    }
  }
  bool ans = true;
  for(ll i=0; i<n; i++){
    for(ll j=0; j<n; j++){
      if(A[i][j] == 0){
        ans = false;
      }
    }
  }
  cout << (ans ? "Yes" : "No");
  return 0;
}
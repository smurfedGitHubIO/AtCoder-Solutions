#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  string A[n];
  string B[m];
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if(i < m){
      B[i] = A[i];
    }
  }
  sort(B, B+m);
  for(ll i=0; i<m; i++){
    cout << B[i] << "\n";
  }
  return 0;
}
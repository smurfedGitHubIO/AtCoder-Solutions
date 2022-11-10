#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 998244353;

ll A[1000000][10];

int main(){
  ll n;
  cin >> n;
  ll ans = 0;
  
  for(ll i=0; i<10 ;i++){
    A[n-1][i] = 1;
  }
  for(ll i=n-2; i>=0; i--){
    for(ll j=1; j<=9; j++){
      if (j == 1) {
        A[i][j] = (A[i+1][1]+A[i+1][2])%MOD;
      } else if (j == 9) {
        A[i][j] = (A[i+1][8]+A[i+1][9])%MOD;
      } else {
        A[i][j] = (A[i+1][j]+A[i+1][j-1]+A[i+1][j+1])%MOD;
      }
    }
  }
  for(ll i=1; i<=9; i++){
    ans = (ans+A[0][i])%MOD;
  }
  cout << ans;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll aoki = 0, takahashi = 0;
  for(ll i=a; i<=b; i++){
    ll p = 0, q = 0;
    for(ll j=c; j<=d; j++){
      ll x = i+j;
      bool check = true;
      for(ll i=2; i*i <= x; i++){
        if(x%i == 0){
          check = false;
          break;
        }
      }
      if (check) {
        p ++;
      } else {
        q ++;
      }
    }
    if(p >= q){
      aoki += 1;
    } else {
      takahashi += 1;
    }
  }
  cout << (aoki >= takahashi ? "Aoki" : "Takahashi");
  return 0;
}
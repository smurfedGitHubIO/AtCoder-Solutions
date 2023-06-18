#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main(){
  ll a = 1;
  ll b = 1;
  for(ll i=0; i<64; i++){
    ll x;
    cin >> x;
    if(x){
      a += b;
    }
    b *= 2;
  }
  cout << a;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  string s;
  cin >> s;
  ll q;
  cin >> q;
  while(q--){
    ll x, y;
    cin >> x >> y;
    ll cur = 0;
    ll q = 1;
    while(q < y){
      cur ++;
      q *= 2;
    }
    if (cur > x) {
      // search other parts
      ll cind = 1;
      ll qind = (1LL<<x);
      for(; cind < s.length(); cind++){
        qind += (1LL<<x);
        if(qind > y){
          break;
        }
      }
    } else {
      // else search it here
    }
  }
  return 0;
}
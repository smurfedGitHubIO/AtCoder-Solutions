#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  string s, t;
  cin >> s >> t;
  ll ans = 0;
  for(ll i=0; i<s.length(); i++){
    if(s[i] != t[i]){
      cout << i+1;
      return 0;
    }
  }
  cout << s.length()+1;
  return 0;
}
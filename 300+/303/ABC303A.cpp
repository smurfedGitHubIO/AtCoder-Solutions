#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for(ll i=0; i<n; i++){
    if(s[i] == t[i] || (s[i] == '1' and t[i] == 'l') || (s[i] == 'l' and t[i] == '1') || (s[i] == '0' and t[i] == 'o') || (s[i] == 'o' and t[i] == '0')){
      continue;
    } else {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
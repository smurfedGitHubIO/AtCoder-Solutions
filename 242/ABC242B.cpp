#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  string s;
  cin >> s;
  vector<char> vc;
  for(ll i=0; i<s.length(); i++){
    vc.emplace_back(s[i]);
  }
  sort(begin(vc), end(vc));
  for(auto x : vc){
    cout << x;
  }
}
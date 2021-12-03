#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string t = "oxxoxxoxxoxxoxxoxxoxx";
  bool check = false;
  int cnt = 0, cnto = 0;
  for(int i=0; i<t.length()-s.length(); i++){
    if(t[i] == s[0]){
      bool cur = true;
      for(int j=0; j<s.length(); j++){
        if(t[i+j] != s[j]){
          cur = false;
          break;
        }
      }
      check |= cur;
    }
  }
  cout << (check ? "Yes" : "No");
  return 0;
}
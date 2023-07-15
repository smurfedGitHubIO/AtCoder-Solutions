#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll s[8];
  // bool check = true;
  for(ll i=0; i<8; i++){
    cin >> s[i];
    if(i > 0 and s[i] >= s[i-1] and s[i] >= 100 and s[i] <= 675 and s[i]%25 == 0){
      continue;
    } else if(i == 0 and s[i] >= 100 and s[i] <= 675 and s[i]%25 == 0){
      continue;
    } else {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int ans = 1;
  for(int i=1; i<=x; i++){
    ans *= i;
  }
  cout << ans;
  return 0;
}
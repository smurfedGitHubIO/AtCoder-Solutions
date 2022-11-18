#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll x;
  cin >> x;
  cout << x/10 - (x < 0 and x%10 != 0 ? 1 : 0);
  return 0;
}
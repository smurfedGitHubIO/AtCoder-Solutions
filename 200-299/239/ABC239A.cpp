#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  double x = sqrt(n*(12800000+n));
  cout << fixed << setprecision(7) << x;
  return 0;
}
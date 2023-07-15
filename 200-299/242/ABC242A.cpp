#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  double a, b, c, x;
  cin >> a >> b >> c >> x;
  cout << fixed << setprecision(6);
  if (x <= a) {
    cout << "1.0000000000";
  } else if (x > a and x <= b) {
    cout << (c/(b-a));
  } else {
    cout << "0.00000000000";
  }
  return 0;
}
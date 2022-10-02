#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  char st[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A', 'B', 'C', 'D', 'E', 'F'};
  ll top = n/16;
  ll bot = n%16;
  cout << st[top] << st[bot];
  return 0;
}
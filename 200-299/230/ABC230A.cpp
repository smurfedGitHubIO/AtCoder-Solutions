#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin >> a;
  cout << "AGC0";
  if(a < 10)
    cout << "0";
  if(a <= 41)
    cout << a;
  else
    cout << a+1;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  map<char, ll> mcl;
  ll by=0;
  ll arr[] = {0, 3,4,8,9,14,23};
  for(char a='A'; a <= 'G'; a++, by++){
    mcl[a] = by;
  }
  char a, b;
  cin >> a >> b;
  if(a > b){
    char c = b;
    b = a;
    a = c;
  }
  cout << arr[mcl[b]] - arr[mcl[a]];
  return 0;
}
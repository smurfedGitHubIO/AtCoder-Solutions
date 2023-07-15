#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  string s[a];
  vector<int> v(b, 0);
  for(int i=0; i<a; i++){
    cin >> s[i];
    for(int j=0; j<b; j++){
      v[j] += (s[i][j] == '#');
    }
  }
  for(int i=0; i<b; i++){
    cout << v[i] << " ";
  }
  return 0;
}
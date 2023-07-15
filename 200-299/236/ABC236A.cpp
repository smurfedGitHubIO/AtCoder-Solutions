#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    ll a, b;
    cin >> s >> a >> b;
    char ts = s[a-1];
    s[a-1] = s[b-1];
    s[b-1] = ts;
    cout << s;
    return 0;
}
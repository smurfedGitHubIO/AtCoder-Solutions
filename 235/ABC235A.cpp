#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll ans = (s[0]-'0') + (s[1]-'0') + (s[2]-'0') + ((s[0]-'0') + (s[1]-'0') + (s[2]-'0'))*10 + ((s[0]-'0') + (s[1]-'0') + (s[2]-'0'))*100;
    cout<<ans;
    return 0;
}

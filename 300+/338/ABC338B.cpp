#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    map<char, ll> mcl;
    ll mx = 0;
    char ans = '|';
    for(ll i=0; i<s.length(); i++){
        mcl[s[i]] += 1;
        if(mcl[s[i]] > mx){
            mx = mcl[s[i]];
            ans = s[i];
            // cout << mx << " " << s[i] << " " << ans << "\n";
        }else if(mcl[s[i]] == mx and ans > s[i]){
            ans = s[i];
        }
    }
    cout << ans;
}
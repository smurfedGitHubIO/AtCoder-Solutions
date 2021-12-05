#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v[26];
    ll cur = 0;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(i == 0){
            cur += 1;
        }
        else if(s[i] == s[i-1]){
            cur += 1;
        }
        else{
            if(cur != 1){
                ans += ((cur-1)*cur)/2;
            }
            cur = 1;
        }
    }
    if(cur != 1){
        ans += ((cur-1)*cur)/2;
    }
    cout << ans;
    return 0;
}
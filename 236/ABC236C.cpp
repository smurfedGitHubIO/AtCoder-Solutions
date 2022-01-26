#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin >> n >> m;
    string s[n];
    map<string, bool> check;
    for(ll i=0; i<n; i++){
        cin >> s[i];
    }
    for(ll i=0; i<m; i++){
        string t;
        cin >> t;
        check[t] = 1;
    }
    for(ll i=0; i<n; i++){
        cout << (check[s[i]] ? "Yes\n" : "No\n");
    }
    return 0;
}
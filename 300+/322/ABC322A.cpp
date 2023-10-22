#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for(ll i=0; i<n-2; i++){
        if(s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C'){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
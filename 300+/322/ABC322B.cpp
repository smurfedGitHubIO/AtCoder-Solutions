#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    ll a = 1, b = 1;
    for(ll i=0; i<n; i++){
        if(s[i] != t[i]){
            a = 0;
        }
        if(s[n-i-1] !=t[m-i-1]){
            b = 0;
        }
    }
    if(a and b){
        cout << 0;
    }else if(a){
        cout << 1;
    }else if(b){
        cout << 2;
    }else{
        cout << 3;
    }
    return 0;
}
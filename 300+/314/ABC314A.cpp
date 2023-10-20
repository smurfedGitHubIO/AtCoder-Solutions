#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    ll n;
    cin >> n;
    cout << "3.";
    for(ll i=2; i<2+n;i ++){
        cout << s[i];
    }
    return 0;
}
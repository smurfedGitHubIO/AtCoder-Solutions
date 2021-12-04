#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll p, q, r, s;
    cin >> p >> q >> r >> s;
    ll mlow = max(1-a, 1-b), mhi = min(n-a,n-b);
    ll nlow = max(1-a, b-n), nhi = min(n-a,b-1);
    for(ll i=p; i<=q; i++){
        for(ll j=r; j <= s; j++){
            if(mlow <= i-a and i-a <= mhi and mlow <= j-b and j-b <= mhi and i-a == j-b){
                cout << '#';
            }
            else if(nlow <= i-a and i-a <= nhi and nlow <= b-j and b-j <= nhi and i-a == b-j){
                cout << '#';
            }
            else {
                cout << '.';
            }
        }
        cout << '\n';
    }
    return 0;
}